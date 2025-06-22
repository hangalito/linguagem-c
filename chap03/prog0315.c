#include <stdio.h>

main()
{
    float salario, imposto = 0.0;
    char sexo;

    printf("Introduza o salario: ");
    scanf("%f", &salario);
    fflush(stdin);
    printf("Qual o sexo: ");
    scanf("%c", &sexo);

    switch (sexo)
    {
    case 'm':
    case 'M': imposto = imposto + .05f;
    case 'f':
    case 'F': imposto = imposto + .10f;
    }

    printf("Imposto %.2f\n", salario * imposto);
}
