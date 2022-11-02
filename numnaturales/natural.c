#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = 0; i < (b - a) + 1; i++)
    {
        printf("%d ", (a + i));
    }
    return 0;
}