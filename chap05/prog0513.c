#include <stdio.h>

float Pot(float x, int n)
{
    float res;
    int i;

    for (i = 1, res = 1.0f; i <= n; i++)
        res *= x;
    return res;
}

float VAL(float x, int n, float t)
{
    float res = 1.0f;
    for (int i = 1; i <= n; i++)
    {
        res *= x / Pot(1 + t, i);
    }
}

main()
{
    float val = 100.0f;
    printf("VAL: %f\n", VAL(val, 20, 14.0f));
}
