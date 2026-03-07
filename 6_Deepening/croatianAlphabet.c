#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    int count = 0;

    scanf("%100s", word);
    int len = strlen(word);

    for (int i = 0; i < len; i++)
    {
        if (i + 2 < len && word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=')
        {
            count++;
            i += 2;
        }
        else if (i + 1 < len && ((word[i] == 'c' && (word[i + 1] == '=' || word[i + 1] == '-')) ||
                                 (word[i] == 'd' && word[i + 1] == '-') ||
                                 (word[i] == 'l' && word[i + 1] == 'j') ||
                                 (word[i] == 'n' && word[i + 1] == 'j') ||
                                 (word[i] == 's' && word[i + 1] == '=') ||
                                 (word[i] == 'z' && word[i + 1] == '=')))
        {
            count++;
            i += 1;
        }
        else
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}