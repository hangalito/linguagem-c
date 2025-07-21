#include <stdio.h>

float max(float v[], int n)
{
    float max = 0;
    for (int i = 0; i < n; i++)
    {
        float temp = v[i];
        if (temp > max)
            max = temp;
    }
    return max;
}

main()
{
    float v[10] = {2.71, 21.18, 3.14, 9.8, 6.28, .0};
    float m = max(v, 10);
    printf("%.2f\n", m);
}
