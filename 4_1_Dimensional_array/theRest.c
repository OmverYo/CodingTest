#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(10 * sizeof(int));
    int modulus = 42;
    int count = 0;

    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        arr[i] = arr[i] % modulus;
    }

    for (int i = 0; i < 10; i++)
    {
        int isUnique = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isUnique = 0;
                break;
            }
        }
        if (isUnique)
        {
            count++;
        }
    }
    printf("%d\n", count);

    free(arr);

    return 0;
}