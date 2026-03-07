#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    char s[101];
    scanf("%s", s);

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += s[i] - '0';
    }

    printf("%d", sum);

    return 0;
}