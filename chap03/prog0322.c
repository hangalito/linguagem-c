#include <stdio.h>

main()
{
    int x;
    printf("Digite o numero: ");
    scanf("%d", &x);
    switch (x)
    {
    case 0: printf("O numero eh zero");
        break;
    default: printf("O numero nao eh zero");
    }
}
