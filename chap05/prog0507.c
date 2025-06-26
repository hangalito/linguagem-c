#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int dobro(int x)
{
    return 2 * x;
}

main()
{
    int n, i, total;
    printf("Introduza dois numeros: ");
    scanf("%d%d", &n, &i);
    total = soma(n, i);
    printf("%d + %d = %d\n", n, i, total);
    printf("2 * %d = %d e 2 * %d = %d\n", n, dobro(n), i, dobro(i));
}
