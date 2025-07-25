#include <stdio.h>
#include <ctype.h>
#include <string.h>

int strconta(char* s)
{
    int cont = 0;
    for (int i = 0; i < strlen(s); ++i)
    {
        if (isalpha(s[i])) cont++;
    }
    return cont;
}

int main(int argc, char* argv[])
{
    char* s1 = "15 abacates";
    char* s2 = "quinze (15) abacates";

    printf("s1 >> %d\n", strconta(s1));
    printf("s2 >> %d\n", strconta(s2));
}
