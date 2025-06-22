#include <stdio.h>

main()
{
    char opcao;
    do
    {
        printf("\tM E N U    P R I N C I P A L\n");
        printf("\n\n\t\tClientes");
        printf("\n\n\t\tFornecedores");
        printf("\n\n\t\tEncomendas");
        printf("\n\n\t\tSair");
        printf("\n\n\n\t\t\tOpcao: ");
        scanf(" %c", &opcao);
        fflush(stdin);
        switch (opcao)
        {
        case 'c':
        case 'C': putchar("Opcao CLIENTES");
            break;
        case 'f':
        case 'F': putchar("Opcao FORNECEDORES");
            break;
        case 'e':
        case 'E': putchar("Opcao ENCOMENDAS");
            break;
        case 's':
        case 'S': break;
        default: putchar("Opcao INVALIDA!!!");
        }
        getchar();
    }
    while (opcao != 's' && opcao != 'S');
}
