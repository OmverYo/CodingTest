#include <stdio.h>

int main()
{
    int H, M, T;
    scanf("%d %d", &H, &M);
    scanf("%d", &T);

    if (T >= 60)
    {
        H += T / 60;
        T = T % 60;
    }

    M += T;
    if (M >= 60)
    {
        H += M / 60;
        M = M % 60;
    }
    H = H % 24;

    printf("%d %d\n", H, M);

    return 0;
}