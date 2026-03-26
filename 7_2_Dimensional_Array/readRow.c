#include <stdio.h>

int main()
{
    char alphabetArray[5][16] = {'\0'};

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", alphabetArray[i]);
    }

    for (int j = 0; j < 15; j++)
    {
        for (int k = 0; k < 5; k++)
        {
            if (alphabetArray[k][j] != '\0')
            {
                printf("%c", alphabetArray[k][j]);
            }
        }
    }

    return 0;
}