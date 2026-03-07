#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int *arr = malloc(N * sizeof(int));
    if (arr == NULL)
        return 1;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    float sum = 0.0f;
    for (int i = 0; i < N; i++)
    {
        sum += (float)arr[i] / max * 100;
    }

    printf("%f\n", sum / N);

    free(arr);

    return 0;
}