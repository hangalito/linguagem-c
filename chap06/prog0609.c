#include <stdio.h>

char* memset(char v[], char ch, int n)
{
    int i;
    for (i = 0; i < n; i++)
        v[i] = ch;
    return v;
}

main()
{
    char v[10];
    memset(v, '*', 5);
    for (int i = 0; i < 10; i++)
        printf("%c", v[i] == '*' ? v[i] : '.');
}
