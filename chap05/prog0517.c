#include <stdio.h>

int impar(int x)
{
    return x % 2 != 0;
}

main()
{
    int n = 1;
    if (impar(n)) printf("%d e impar\n", n);
    else printf("%d e par\n", n);
}
