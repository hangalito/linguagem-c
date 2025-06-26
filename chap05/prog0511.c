#include <stdio.h>

float Pot(float x, int n)
{
    float res;
    int i;

    for (i = 1, res = 1.0f; i <= n; i++)
        res *= x;
    return res;
}

main()
{
    printf("%f %f %f\n", Pot(2.0f, 4), Pot(1.234f, 3), Pot(3.0f, 0));
}
