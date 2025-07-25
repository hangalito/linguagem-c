#include <stdio.h>
#include <ctype.h>
#include <string.h>

// fixme: fix this function
char* str_lwr(char* str)
{
    for (int i = 0; i < strlen(str); ++i)
    {
        char c = (char)tolower(str[i]);
        str[i] = c;
    }
    return str;
}

int main(int argc, char* argv[])
{
    char* s = "BARTO";
    printf("%s\n", s);
}
