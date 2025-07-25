#include <stdio.h>
#include <string.h>
#define DIM 20
#define NAME_SEP ", "

main()
{
    char name[DIM + 1], surname[DIM + 1], fullname[2 * DIM + 1];
    while (1)
    {
        printf("Name: ");
        gets(name);
        if (strlen(name) == 0) break;

        printf("Surname: ");
        gets(surname);
        strcpy(fullname, surname);
        strcat(fullname,NAME_SEP);
        strcat(fullname, name);
        puts(fullname);
    }
}
