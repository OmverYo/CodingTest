#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // 문자열 끝에는 종료 문자가 자동으로 붙는다. 그래서 101임
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