#include <stdio.h>

main()
{
    char est_civil;

    printf("Qual o estado civil: ");
    est_civil = getchar();

    switch (est_civil)
    {
    case 'C': printf("Casado\n");
        break;
    case 'S': printf("Solteiro\n");
        break;
    case 'D': printf("Divorciado\n");
        break;
    case 'V': printf("Viuvo\n");
        break;
    default: printf("Estado civil incorreto");
    }
}
