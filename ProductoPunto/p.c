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
int main()
{
    int n, i, suma = 0;
    scanf("%d", &n);

    int vector1[n];
    int vector2[n];

    leer(n, i, vector1);
    leer(n, i, vector2);

    for (i = 0; i < n; i++)
    {
        suma += vector1[i] * vector2[i];
    }

    printf("%d", suma);
    return 0;
}