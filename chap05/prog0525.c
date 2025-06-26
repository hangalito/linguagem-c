#include <stdio.h>

char toupper(char c)
{
    return c >= 'a' && c <= 'z' ? c + 'A' - 'a' : c;
}

main()
{
    char c = 'b';
    printf("%c toupper %c\n", c, toupper(c));
}
