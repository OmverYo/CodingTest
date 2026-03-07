#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 9;
    int *arr = malloc(size * sizeof(int));

    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    int nth = 0;

    for (int j = 0; j < size; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            nth = j + 1;
        }
    }

    printf("%d\n", max);
    printf("%d\n", nth);

    free(arr);

    return 0;
}