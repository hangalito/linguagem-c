#include <stdio.h>

long int num(int n_horas, char tipo)
{
    long int res;
    switch (tipo)
    {
    case 'h':
    case 'H': res = n_horas;
        break;
    case 'm':
    case 'M': res = n_horas * 60;
        break;
    case 's':
    case 'S': res = n_horas * 3600;
        break;
    default: res = 1;
    }
    return res;
}

main()
{
    int n_horas = 3;
    char tipo = 's';
    printf("num(%d,%c) -> %d\n", n_horas, tipo, num(n_horas, tipo));
}
