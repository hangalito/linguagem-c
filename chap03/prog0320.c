#include <stdio.h>

main()
{
    int n_horas;
    long res;
    char tipo;

    printf("Nº de horas: ");
    scanf("%d", &n_horas);
    printf("O que mostrar (s/m/d): ");
    scanf(" %c", &tipo);
    res = n_horas;

    switch (tipo)
    {
    case 'd':
    case 'D': res = res * 10;
    case 's':
    case 'S': res = res * 60;
    case 'm':
    case 'M': res = res * 60;
    }

    printf("%dh --> %ld%c\n", n_horas, res, tipo);
}
