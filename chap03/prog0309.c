#include <stdio.h>

main()
{
	float salario;
	char est_civil;

	printf("Qual o salario: ");
	scanf("%f", &salario);

	printf("Qual o estado civil: ");
	fflush(stdin);
	scanf("%c", &est_civil);

	if (est_civil == 'C' || est_civil == 'c')
		printf("Imposto: %.2f\n", salario * .09);
	else 
		if (est_civil == 'S' || est_civil == 's')
			printf("Imposto: %.2f\n", salario * .10);
		else
			printf("Estado civil incorreto!!!\n");
}
