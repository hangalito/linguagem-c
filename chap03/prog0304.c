#include <stdio.h>

main()
{
    float salario;
    printf("Qual o salario: ");
    scanf("%f", &salario);
    if (salario < 100000)
        salario = salario + 1000;
    printf("Salário Final: %.2f\n", salario);
}
