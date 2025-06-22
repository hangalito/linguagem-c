#include <stdio.h>

main()
{
	int a, b;

	printf("Introduza dois nums: ");
	scanf("%d%d", &a, &b);

	if ( a >= 0)
	{
		if (b > 10)
			printf("B é muito grande");
	} else
		printf("A tem um valor negativo");
}
