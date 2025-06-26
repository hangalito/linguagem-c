#include <stdio.h>

int isalnum(char c)
{
    return c >= 'a' && c <= 'z'
        || c >= '0' && c <= '9'
        || c >= 'A' && c <= 'Z';
}

main()
{
    char c = '\x76';
    if (isalnum(c))
        printf("'%c' is alphanumeric\n", c);
    else
        printf("'%c' is not alphanumeric\n", c);
}
