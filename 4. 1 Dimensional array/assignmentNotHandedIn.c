#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = calloc(30, sizeof(int));

    if (arr == NULL)
        return 1;

    int n;

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &n);
        arr[n - 1] = 1;
    }

    for (int i = 0; i <= 29; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\n", i + 1);
        }
    }

    free(arr);

    return 0;
}