#include <stdio.h>

main()
{
    char name[100];
    while (1)
    {
        puts("Enter a name: ");
        gets(name);
        if (name[0] == '\0')break;
        else printf("Entered name: %s\n", name);
    }
}
