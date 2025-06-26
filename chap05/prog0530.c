#include <stdio.h>

int is_vogal(char c)
{
    int res = 0;
    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U': res = !res;
        break;
    }

    return res;
}

main()
{
    char c = 'z';
    if (is_vogal(c))
        printf("%c eh vogal\n", c);
    else
        printf("%c nao eh vogal\n", c);
}
