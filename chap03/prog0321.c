#include <stdio.h>

main()
{
    int num;
    printf("Digite o número: ");
    scanf("%d", &num);

    if (num == 0)
        printf("O numero eh zero");
    else
        printf("O numero nao eh zero");
}
