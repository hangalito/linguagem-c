#include <stdio.h>

int is_square(int x, int y)
{
    return x == y * y;
}

main()
{
    int x, y;
    x = 16;
    y = 4;
    if (is_square(x, y)) printf("%d equals %d squared\n", x, y);
    else printf("%d does not equal %d squared\n", x, y);
}
