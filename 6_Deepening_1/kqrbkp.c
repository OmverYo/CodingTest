#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(6 * sizeof(int));

    if (arr == NULL)
    {
        return 1;
    }

    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 2;
    arr[4] = 2;
    arr[5] = 8;

    int *newArr = calloc(6, sizeof(int));

    if (newArr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &newArr[i]);
    }

    for (int j = 0; j < 6; j++)
    {
        printf("%d ", arr[j] - newArr[j]);
    }

    free(arr);
    free(newArr);

    return 0;
}