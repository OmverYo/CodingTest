#include <stdio.h>

int main()
{
    int a[9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int max = -1;
    int positionI = 0;
    int positionJ = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
                positionI = i + 1;
                positionJ = j + 1;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", positionI, positionJ);

    return 0;
}