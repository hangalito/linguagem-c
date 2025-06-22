#include <stdio.h>

main()
{
    short mes, qtd_dias;
    const char* meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    printf("Digite o mes (1-12): ");
    scanf("%hd", &mes);

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: qtd_dias = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11: qtd_dias = 30;
        break;
    case 2: qtd_dias = 28;
        break;
    default: qtd_dias = 0;
    }

    printf("O mes de %s tem %hd dias\n", mes[mes - 1], qtd_dias);
}
