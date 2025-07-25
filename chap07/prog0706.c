#include <stdio.h>

int strcmp(char* s1, char* s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(int argc, char* argv[])
{
    char name[30 + 1];

    do
    {
        printf("Name: ");
        gets(name);
        puts(name);
    }
    while (strcmp(name, "SAIR") != 0);
    printf("Finished the program");
}
