#include <stdio.h>
#include <string.h>

// fixme: fix this function
char* init_str(char* s)
{
    for (int i = 0; i < strlen(s); ++i)
    {
        s[i] = ' ';
    }
    return s;
}

int main(int argc, char* argv[])
{
    char* s = "Barto";
    auto l1 = strlen(s);
    init_str(s);
    auto l2 = strlen(s);

    printf("len before >> %d\n", l1);
    printf("len after >> %d\n", l2);
}
