#include <stdio.h>

int isdigit(char c)
{
    return c >= '0' && c <= '9';
}

main()
{
    char c = '5';
    if (isdigit(c)) printf("%c is digit\n", c);
    else printf("%c is not digit \n", c);
}
