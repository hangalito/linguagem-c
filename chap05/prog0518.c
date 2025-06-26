#include <stdio.h>

int entre(int x, int lim_inf, int lim_sup)
{
    return x >= lim_inf && x <= lim_sup;
}

main()
{
    int num, lim_sup, lim_inf;
    lim_inf = 3;
    lim_sup = 9;
    num = 0;
    if (entre(num, lim_inf, lim_sup))
        printf("%d is between %d and %d\n", num, lim_inf, lim_sup);
    else
        printf("%d is not between %d and %d\n", num, lim_inf, lim_sup);
}
