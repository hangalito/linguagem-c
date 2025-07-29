#include <stdio.h>

int strlen(char* s);

main()
{
    char s[100];
    char* ptr = s;

    printf("Introduza uma string: ");
    gets(s);


    printf("%d\n", strlen(s));
}

int strlen(char* s)
{
    char* ptr = s;
    while (*s != '\0')
        s++;
    return (int)(s - ptr);
}
