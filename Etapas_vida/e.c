#include <stdio.h>

int main()
{
    short l;

    scanf("%hd", &l);

    if (l > 65)
    {
        printf("ADULTO 3RA");
    }
    else
    {
        if (l > 0 && l < 3)
        {
            printf("BEBE");
        }
        if (l > 3 && l <= 14)
        {
            printf("NINO");
        }
        if (l > 14 && l <= 18)
        {
            printf("JOVEN");
        }
        if (l > 18 && l <= 65)
        {
            printf("ADULTO");
        }
    }

    return 0;
}