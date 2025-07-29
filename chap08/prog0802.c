#include <stdio.h>

main()
{
    char s[100];
    char* ptr = s;

    printf("Introduza uma string: ");
    gets(s);
    fflush(stdin);
    puts("");
    if (*ptr == '\0') return;
    while (*ptr != '\0')
        putchar(*ptr++);
    fflush(stdin);
    puts("");
    ptr--;
    while (ptr >= s)
        putchar(*ptr--);
}
