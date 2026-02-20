#include <stdio.h>
#include <string.h>

int main()
{
    char words[1000001];
    fgets(words, sizeof(words), stdin);

    int len = strlen(words);

    // 개행 제거
    if (len > 0 && words[len - 1] == '\n')
        words[len - 1] = '\0';

    int count = 0;

    for (int i = 0; words[i] != '\0'; i++)
    {
        if (words[i] != ' ' && (i == 0 || words[i - 1] == ' '))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}