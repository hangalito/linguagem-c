#include <stdio.h>

main()
{
    int i;
    for (i = 1; i <= 100; i = i + 1)
    {
        if (i == 30)
            break;
        else
            printf("%2d\n", i * 2);
    }
    printf("FIM DO LACO");
}
