#include <stdio.h>

main()
{
    int i, j, n;
    char ch;

    printf("Introduza um numero: ");
    scanf("%d", &n);
    fflush(stdin);
    printf("Introduza um caractere: ");
    scanf("%c", &ch);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            putchar(ch);
        putchar('\n');
    }
}
