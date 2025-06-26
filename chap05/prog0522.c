#include <stdio.h>

int islower(char c)
{
    return c >= 'a' && c <= 'z';
}

main()
{
    char upper = 'A';
    char lower = 'a';

    if (islower(upper))
        printf("%c is lowercase\n", upper);
    else
        printf("%c is not lowercase\n", upper);

    if (islower(lower))
        printf("%c is lowercase\n", lower);
    else
        printf("%c is not lowercase\n", lower);
}
