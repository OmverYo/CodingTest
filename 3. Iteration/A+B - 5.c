#include <stdio.h>

int main()
{
    int A, B = 0;
    int flag = 1;

    while (flag == 1)
    {
        scanf("%d %d", &A, &B);
        if (A == 0 && B == 0)
        {
            break;
        }
        else
        {
            printf("%d\n", A + B);
        }
    }

    return 0;
}