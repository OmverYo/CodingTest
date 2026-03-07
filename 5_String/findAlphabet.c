#include <stdio.h>

int main()
{
    char S[101];
    scanf("%s", S);

    for (int i = 'a'; i <= 'z'; i++)
    {
        int pos = -1;

        for (int j = 0; S[j] != '\0'; j++)
        {
            if (S[j] == i)
            {
                pos = j;
                break;
            }
        }

        printf("%d ", pos);
    }
}