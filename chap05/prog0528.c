#include <stdio.h>
#include "functions.c"

int is_special(int x)
{
    int d = dobro(x);
    int q = quadrado(x);
    return d == q;
}

main()
{
    int s = 3;
    if (is_special(s))
        printf("%d is special\n", s);
    else
        printf("%d is not special\n", s);
}
