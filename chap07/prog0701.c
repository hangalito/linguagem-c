#include <stdio.h>

main()
{
    char name[50], surname[50];
    printf("Enter your name: ");
    scanf("%s", name);
    fflush(stdin);
    printf("Enter your surname: ");
    scanf("%s", surname);

    printf("Full name: %s %s\n", name, surname);
}
