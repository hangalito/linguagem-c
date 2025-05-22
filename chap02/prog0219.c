#include <stdio.h>

main()
{
	float x;
	
	printf("Introduza um num real: ");
	scanf("%f", &x);
	printf("Parte inteira    : %d\n", (int) x);
	printf("Parte faccionaria: %f\n", x - ((int) x));
}

