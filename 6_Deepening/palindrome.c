#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    char rWord[101];

    scanf("%100s", word);

    int length = strlen(word);

    for (int i = 0; i < length; i++)
    {
        rWord[length - i - 1] = word[i];
    }
    rWord[length] = '\0';

    if (strcmp(word, rWord) == 0)
        printf("1");
    else
        printf("0");

    return 0;
}