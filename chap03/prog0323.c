#include <stdio.h>

main()
{
    int x;
    char* res;

    printf("Digite o numero: ");
    scanf("%d", &x);

    if (x == 0) res = "eh";
    else res = "nao eh";

    printf("%s zero\n", res);
}
