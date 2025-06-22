#include <stdio.h>

main()
{
    int num;
    char* res;

    printf("Digite o numero: ");
    scanf("%d", &num);

    switch (num)
    {
    case 0: res = "eh";
    default: res = "nao eh";
    }

    printf("%s zero\n", res);
}
