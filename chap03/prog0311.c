#include <stdio.h>

main()
{
	char est_civil;

	puts("Qual o estado civil: ");
	est_civil = getchar();

	if (est_civil == 's' || est_civil == 'S')
		printf("Solteiro");
	else
		if (est_civil == 'c' || est_civil == 'C')
			printf("Casado");
		else
			if (est_civil == 'd' || est_civil == 'D')
				printf("Divorciado");
			else
				if (est_civil == 'v' || est_civil == 'V')
					printf("Viúvo");
				else
					printf("Estado civil inválido!\n");
}
