#include <stdio.h>

void leer(int n, int i, int vector[])
{
    int aux;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &aux);
        vector[i] = aux;
    }
}

int main(int argc, char *argv[])
{
    int n, i;
    scanf("%d", &n);
    int vector1[n];
    int vector2[n];

    leer(n, i, vector1);
    leer(n, i, vector2);

    for (int i = 0; i < n; i++)
    {
        if (vector1[i] <= vector2[i])
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}