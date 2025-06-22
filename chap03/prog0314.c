#include <stdio.h>

main()
{
    float salario, imposto = 0.0;
    char sexo;
    printf("Introduza o Salario: ");
    scanf("%f", &salario);
    printf("Qual o Sexo: ");
    scanf(" %c", &sexo);

    switch (sexo)
    {
    case'f':
    case 'F': imposto = .10f;
        break;
    case 'm':
    case 'M': imposto = .15f;
        break;
    }
    printf("Imposto %.2f\n", salario * imposto);
}
