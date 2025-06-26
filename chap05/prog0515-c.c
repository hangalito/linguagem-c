#include <stdio.h>

long int num(int n_horas, char tipo)
{
    if (tipo == 'h' || tipo == 'H')
        return n_horas;
    if (tipo == 'm' || tipo == 'M')
        return n_horas * 60;
    if (tipo == 's' || tipo == 'S')
        return n_horas * 3600;
    return 0;
}

main()
{
    int n_horas = 3;
    char tipo = 's';
    printf("num(%d,%c) -> %d\n", n_horas, tipo, num(n_horas, tipo));
}
