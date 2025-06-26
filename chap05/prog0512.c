#include <stdio.h>

int abs(int x)
{
    return +x;
}

main()
{
    int n = 5;
    int m = -5;
    printf("n = %d >> abs(n) = %d\n", n, abs(n));
    printf("m = %d >> abs(m) = %d\n", m, abs(m));
}
