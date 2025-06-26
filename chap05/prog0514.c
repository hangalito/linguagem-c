#include <stdio.h>

unsigned int n_segundos(unsigned int n_horas)
{
    return n_horas * 3600;
}

main()
{
    unsigned int horas = (365 * 21) * 24;
    printf("%uh = %us\n", horas, n_segundos(horas));
}
