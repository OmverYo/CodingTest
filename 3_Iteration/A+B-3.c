#include <stdio.h>

int main()
{
    int sum, t;
    scanf("%d", &t);
    int a[t], b[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }

    for (int i = 0; i < t; i++)
    {
        sum = a[i] + b[i];
        printf("%d\n", sum);
    }

    return 0;
}