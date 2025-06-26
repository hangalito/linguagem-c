#include <stdio.h>

float max(float x, float y, float w)
{
    if (x > y && x > w) return x;
    if (y > x && y > w) return y;
    return w;
}

main()
{
    float a, b, c;
    b = 3;
    c = 2;
    a = 1;
    printf("max(%f,%f,%f) -> %f\n", a, b, c, max(a, b, c));
}
