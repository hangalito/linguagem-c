#include <stdio.h>

int isalpha(char c)
{
    return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
}

main()
{
    char c = '9';
    if (isalpha(c)) printf("%c is alphabet", c);
    else printf("%c is not alphabet", c);
}
