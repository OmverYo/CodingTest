#include <stdio.h>

int main()
{
    char S[21];
    int R;
    char P[161];
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %s", &R, &S);
        int idx = 0;
        for (int j = 0; S[j] != '\0'; j++)
        {
            for (int k = 0; k < R; k++)
            {
                P[idx++] = S[j];
            }
        }
        P[idx] = '\0';
        printf("%s\n", P);
    }

    return 0;
}