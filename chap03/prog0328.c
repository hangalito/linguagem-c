#include <stdio.h>

main()
{
    int dia, mes, ano;

    printf("Digite uma data: (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes > 12)
    {
        printf("Data invalida!\n");
    }
    else if (mes == 2 && dia > 28)
    {
        printf("Data invalida!\n");
    }
    else if (ano < 1700)
    {
        printf("Data invalida!\n");
    }
    else
    {
        printf("a data introduzida eh valida\n");
    }
}
