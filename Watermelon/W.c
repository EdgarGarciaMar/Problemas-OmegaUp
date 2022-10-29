#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    short w;
    scanf("%hd", &w);

    if (w > 2 && w % 2 == 0)
    {
        printf("SI");
    }
    else
    {
        printf("NO");
    }

    return 0;
}