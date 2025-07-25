#include <stdio.h>
#include <string.h>

// fixme: not working too
char* str_set(char* s, char c, int n)
{
    auto len = (int)strlen(s);
    for (int i = 0; i < n; ++i)
        s[i] = c;
    return s;
}

int main(int argc, char* argv[])
{
    char* s = "alfabeto";
    str_set(s, 'y', strlen(s) + 10);
    printf("%s\n", s);
}
