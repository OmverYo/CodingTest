#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    N = N / 4;

    for (int i = 1; i <= N; i++)
    {
        printf("long ");
    }

    printf("int\n");

    return 0;
}