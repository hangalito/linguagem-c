// fixme: all source code is buggy

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

bool contains(string s, char c)
{
    const unsigned long long len = strlen(s);
    for (int i = 0; i < len; i++)
        if (s[i] == c) return true;
    return false;
}

char* repeat(string s)
{
    char aux[strlen(s)];
    string string = malloc(strlen(s));
    for (int i = 0; i < strlen(s); ++i)
    {
        char c = s[i];
        if (!contains(aux, c))
        {
            aux[i] = c;
        }
        else
        {
            strcat(string, (char*)c);
        }
    }
    return string;
}

int main(int argc, char* argv[])
{
    string s = "Bartolomeu";
    repeat(s);
}
