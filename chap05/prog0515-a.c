#include <stdio.h>

long int num(int n_horas, char tipo)
{
    switch (tipo)
    {
    case 'h':
    case 'H': return n_horas;
    case 'm':
    case 'M': return n_horas * 60;
    case 's':
    case 'S': return n_horas * 3600;
    default: return 0;
    }
}

main()
{
    int n_horas = 3;
    char tipo = 's';
    printf("num(%d,%c) -> %d\n", n_horas, tipo, num(n_horas, tipo));
}
