#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int canvas[100][100] = {0};
    int x, y;
    int area = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);

        for (int j = y; j < y + 10; j++)
        {
            for (int k = x; k < x + 10; k++)
            {
                canvas[k][j] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (canvas[i][j] == 1)
            {
                area++;
            }
        }
    }

    printf("%d", area);

    return 0;
}