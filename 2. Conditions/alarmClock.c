#include <stdio.h>

int main()
{
    int H, M;
    scanf("%d %d", &H, &M);

    if (M < 45)
    {
        M = 60 - (45 - M);
        if (H == 0)
        {
            H = 23;
        }
        else
        {
            H = H - 1;
        }
    }
    else
    {
        M = M - 45;
    }

    printf("%d %d\n", H, M);

    return 0;
}