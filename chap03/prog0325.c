#include <stdio.h>

main()
{
    short mes;
    short qtd_dias;
    const char* meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    printf("Digite o mes (1-12): ");
    scanf("%hd", &mes);

    if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12))
    {
        qtd_dias = 31;
    }
    else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11))
    {
        qtd_dias = 30;
    }
    else if (mes == 2)
    {
        qtd_dias = 28;
    }
    else qtd_dias = 0;

    printf("O mes de %s tem %hd dias\n", meses[mes - 1], qtd_dias);
}
