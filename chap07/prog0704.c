#include <stdio.h>

main()
{
    char name[100];
    while (1)
    {
        puts("Name: ");
        gets(name);
        if (name[00] == '\0') break;

        printf("Entered name: %s\n", name);
    }
}
