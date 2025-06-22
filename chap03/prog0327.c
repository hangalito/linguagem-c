#include <stdio.h>

main()
{
    int mes, qtd_dias = 0;
    const char* meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: qtd_dias = qtd_dias + 1;
    case 4:
    case 6:
    case 9:
    case 11: qtd_dias = qtd_dias + 2;
    case 2: qtd_dias = qtd_dias + 28;
    }

    printf("O mes de %s tem %hd dias\n", meses[mes - 1], qtd_dias);
}
