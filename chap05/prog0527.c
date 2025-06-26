#include <stdio.h>

int minus(int num)
{
    return num < 0 ? num : -num;
}

main()
{
    int positive = 10;
    int negative = -10;
    printf("minus(%d) >> %d\n", positive, minus(positive));
    printf("minus(%d) >> %d\n", negative, minus(negative));
}
