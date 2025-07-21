#include <stdio.h>

char* mempcpy(char* dest, char* orig, int n)
{
    for (int i = 0; i < n; ++i)
    {
        dest[i] = orig[i];
    }
}

main()
{
    char v1[] = {'a', 'e', 'i', 'o', 'u'};
    char v2[] = {};
    int n = 3;
    mempcpy(v2, v1, n);
    for (int i = 0; i < n; ++i)
    {
        printf("%c\n", v2[i]);
    }
}
