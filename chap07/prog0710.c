#include <stdio.h>
#include <string.h>

int ult_ind_ch(char* s, char c)
{
    int i = strlen(s);
    for (i--; i > 0; i--)
        if (s[i] == c) return i;
    return -1;
}

int main(int argc, char* argv[])
{
    char* s = "prog0701.c";
    char c = ',';
    auto i = ult_ind_ch(s, c);
    printf("last index of %c in %s >> %d\n", c, s, i);
}
