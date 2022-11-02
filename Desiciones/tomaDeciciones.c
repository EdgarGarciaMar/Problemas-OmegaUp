#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a + b == 5)
    {
        b += 3;
        printf("%d", ((2 * a) + b));
    }
    else
    {
        a -= 1;
        if (((7 * a) + b) % 2 == 0)
        {
            printf("%d", (a - b));
        }
        else
        {
            printf("%d", a * b);
        }
    }

    return 0;
}