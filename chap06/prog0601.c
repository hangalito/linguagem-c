#include <stdio.h>

main()
{
    float sal[12];
    float total;
    int i;

    for (i = 0; i < 12; i++)
    {
        printf("Introduza o valor do mês %d\n", i + 1);
        scanf("%f", &sal[i]);
    }

    puts("Mês      Valor");
    for (i = 0, total = 0.0; i < 12; i++)
    {
        printf("%3d      %9.2f\n", i+1, sal[i]);
        total += sal[i];
    }
    printf("Total Anual: %9.2f", total);
}
