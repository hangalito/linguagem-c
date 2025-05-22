#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int x, y, tmp;

    printf("Introduza um inteiro: ");
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("%d %d\n", x, y);
}
