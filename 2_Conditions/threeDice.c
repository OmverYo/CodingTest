#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        d = 10000 + a * 1000;
        printf("%d\n", d);
    }
    else if (a == b || a == c || b == c)
    {
        int pair_value;
        if (a == b || a == c)
            pair_value = a;
        else
            pair_value = b;
        d = 1000 + pair_value * 100;
        printf("%d\n", d);
    }
    else
    {
        int max;
        if (a > b)
        {
            if (a > c)
                max = a;
            else
                max = c;
        }
        else
        {
            if (b > c)
                max = b;
            else
                max = c;
        }
        d = max * 100;
        printf("%d\n", d);
    }

    return 0;
}