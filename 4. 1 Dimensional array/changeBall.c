#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int *arr = malloc(N * sizeof(int));

    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 1; i <= N; i++)
    {
        arr[i - 1] = i;
    }

    int a, b, temp;

    for (int j = 0; j < M; j++)
    {
        scanf("%d %d", &a, &b);
        temp = arr[a - 1];
        arr[a - 1] = arr[b - 1];
        arr[b - 1] = temp;
    }

    for (int k = 0; k < N; k++)
    {
        printf("%d ", arr[k]);
    }

    free(arr);

    return 0;
}