#include <stdio.h>

void linha();

main()
{
    linha();
    printf("Hello, world!\n");
    linha();
}

void linha()
{
    int i;
    for (i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');
}
