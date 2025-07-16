#include <stdio.h>

main()
{
    float sal[13];
    float total;
    int i;

    for (i = 1; i < 13; i++)
    {
        printf("Introduza o valor do mês %d\n", i);
        scanf("%f", &sal[i]);
    }

    puts("Mês      Valor");
    for (i = 1, total = 0.0; i < 13; i++)
    {
        printf("%3d      %9.2f\n", i, sal[i]);
        total += sal[i];
    }
    printf("Total Anual: %9.2f", total);
}
