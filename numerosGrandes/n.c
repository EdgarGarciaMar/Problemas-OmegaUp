#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z;

    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    if (x >= 1 && y >= 1 && z >= 1)
    {
        printf("%f", ((((2 * x + y) / (z)) * (pow(y, 3) - z)) / (((x + 2 * y + 3 * z) / (z - 2 * y - 3 * x)) + (pow(x, 2)) + pow(z, 2))));
    }
    return 0;
}