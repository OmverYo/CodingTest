#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // 위쪽 삼각형
    for (int i = 1; i <= N; i++)
    {
        // 공백 출력
        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        // 별 출력
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // 아래쪽 삼각형
    for (int i = 1; i <= N - 1; i++)
    {
        // 공백 출력
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        // 별 출력
        for (int j = 1; j <= 2 * (N - i) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}