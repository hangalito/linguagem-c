#include <stdio.h>

main()
{
    int n, num, soma, produto;

    printf("Introduza o numero: ");
    scanf("%d", &num);

    for (soma = 0, n = produto = 1; n <= num; n = n + 1)
    {
        soma = soma + n;
        produto = produto * n;
    }

    printf("Soma = %d\n", soma);
    printf("Produto = %d\n", produto);
}
