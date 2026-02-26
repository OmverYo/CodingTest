#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[4];
    char B[4];
    char rA[4];
    char rB[4];
    int iA, iB;
    int idx;

    scanf("%s %s", A, B);

    idx = 2;
    for (int i = 0; i < 3; i++)
    {
        rA[i] = A[idx--];
    }
    rA[3] = '\0';

    idx = 2;
    for (int i = 0; i < 3; i++)
    {
        rB[i] = B[idx--];
    }
    rB[3] = '\0';

    iA = atoi(rA);
    iB = atoi(rB);

    if (iA > iB)
        printf("%d", iA);
    else
        printf("%d", iB);

    return 0;
}