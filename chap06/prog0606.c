#include <stdio.h>
#define NUM 10

void init(int s[])
{
    int i;
    for (i = 0; i < NUM; i++)
        s[i] = 0;
}

main()
{
    int v[NUM], i;
    init(v);

    for (i = 0; i < NUM; i++)
        v[i] = i;

    for (i = NUM - 1; i >= 0; i--)
        printf("%d\n", v[i]);
}
