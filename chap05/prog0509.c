/**********************************************************
 * Escreva uma função x_digit, que verifica se um         *
 * determinado caractere é dígito ou não.                 *
 * ********************************************************/

#include <stdio.h>

int x_digit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

main()
{
    char c;
    while (1)
    {
        c = getchar();
        if (!x_digit(c))
            putchar(c);
    }
}
