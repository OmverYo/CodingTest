#include <stdio.h>

int main()
{
    int N, min, max = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (i == 0)
        {
            min = arr[i];
            max = arr[i];
        }
        else
        {
            if (arr[i] < min)
                min = arr[i];
            if (arr[i] > max)
                max = arr[i];
        }
    }

    printf("%d %d", min, max);

    return 0;
}