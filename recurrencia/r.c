#include <stdio.h>

long int recurencia(short n, short k)
{
    if (n == 0)
    {
        return k;
    }
    if (n > 0)
    {
        long int a = recurencia(n - 1, k) + 2 * recurencia(n - k, 1 - k);
        return a;
    }
}

int main()
{
    short n;

    scanf("%hd", &n);

    printf("%ld", recurencia(n, 0));

    return 0;
}