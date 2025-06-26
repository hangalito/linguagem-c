#include <stdio.h>

int isupper(char c)
{
    return c >= 'A' && c <= 'Z';
}

main()
{
    char upper = 'A';
    char lower = 'a';

    if (isupper(upper))
        printf("%c is uppercase\n", upper);
    else
        printf("%c is not uppercase\n", upper);

    if (isupper(lower))
        printf("%c is uppercase\n", lower);
    else
        printf("%c is not uppercase\n", lower);
}
