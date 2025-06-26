#include <stdio.h>

char tolower(char c)
{
    return c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c;
}

main()
{
    char c = 'A';
    printf("%c tolower %c\n", c, tolower(c));
}
