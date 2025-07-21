#include <stdio.h>

char toupper(char c)
{
    return c >= 'a' && c <= 'z' ? c + 'A' - 'a' : c;
}

int memicmp(char* s1, char* s2, int n)
{
    int m = 0;
    for (int i = 0; i < n; ++i)
    {
        char cs1 = toupper(s1[i]);
        char cs2 = toupper(s2[i]);
        if (cs1 != cs2)
        {
            m = cs1 > cs2 ? 1 : -1;
            break;
        }
    }
    return m;
}

main()
{
    char s1[] = {'a', 'e', 'o', 'o', 'u'};
    char s2[] = {'A', 'E', 'O', 'O', 'U'};

    int cmp = memicmp(s1, s2, 5);
    printf("cpm >> %d\n", cmp);
}
