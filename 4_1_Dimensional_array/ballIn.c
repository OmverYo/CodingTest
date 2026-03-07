#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int *arr = calloc(N, sizeof(int));

    if (arr == NULL)
    {
        return 1;
    }

    int i, j, k;

    for (int a = 1; a <= M; a++)
    {
        scanf("%d %d %d", &i, &j, &k);
        for (int b = i; b <= j; b++)
        {
            arr[b - 1] = k;
        }
    }

    for (int c = 0; c < N; c++)
    {
        printf("%d ", arr[c]);
    }

    free(arr);

    return 0;
}