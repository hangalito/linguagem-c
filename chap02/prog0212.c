
#include <stdio.h>

main()
{
	char ch1, ch2;
	printf("Introduza um caractere: ");
	scanf("%c", &ch1);
	// fflush(stdin); limpa o buffer
	printf("Introduza outro caractere: ");
	scanf(" %c", &ch2); // o espaço em branco antes do formato de leitura diz à função para ignorar os espaços em branco
	printf("Os caracteres introduzidos foram '%c' e '%c'\n", ch1, ch2);
}

