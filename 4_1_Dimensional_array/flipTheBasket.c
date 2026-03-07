#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int *basket = malloc(N * sizeof(int));
    int *basketReverse = malloc(N * sizeof(int));

    if (basket == NULL)
    {
        return 1;
    }

    if (basketReverse == NULL)
    {
        return 1;
    }

    for (int i = 1; i <= N; i++)
    {
        basket[i - 1] = i;
        basketReverse[i - 1] = i;
    }

    int a, b;

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &a, &b);
        for (int j = a; j <= b; j++)
        {
            basketReverse[j - 1] = basket[a + b - j - 1];
        }

        for (int k = a - 1; k < b; k++)
        {
            basket[k] = basketReverse[k];
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", basket[i]);
    }

    free(basket);
    free(basketReverse);

    return 0;
}