#include <stdio.h>

int main()
{
    int n, i, aux, k;
    scanf("%d", &n);

    int vector[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &aux);
        vector[i] = aux;
    }

    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        if (vector[i] % k == 0)
        {
            printf("%d ", vector[i]);
        }
        else
        {
            printf("X ");
        }
    }

    return 0;
}