#include <stdio.h>
#include <stdlib.h>

int main()
{

    char opc;
    int dinero = 1000, efectivo;

    while (scanf("%c", &opc) != EOF)
    {

        switch (opc)
        {
        case 'C':
            printf("$%d\n", dinero);
            break;
        case 'D':
            scanf("%d", &efectivo);
            dinero += efectivo;
            break;
        case 'R':
            scanf("%d", &efectivo);
            dinero -= efectivo;
            break;
        case 'S':
            return 0;
        }
    }

    return 0;
}