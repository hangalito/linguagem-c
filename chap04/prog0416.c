#include <stdio.h>

void single_variable(const int* n);
void two_variable(const int* n);

main()
{
    int i, j, n;
    printf("Introduza um numero: ");
    scanf("%d", &n);
    single_variable(&n);
}

void two_variable(const int* n)
{
    if (n != NULL)
    {
        int i, j;
        for (i = 1, j = *n; i <= *n; i++, j--)
        {
            printf("%d %d\n", i, j);
        }
    }
}

void single_variable(const int* n)
{
    if (n != NULL)
    {
        int i;
        for (i = 1; i <= *n; i++)
            printf("%d %d\n", i, *n - i + 1);
    }
    else
    {
        perror("cannot operate on NULL pointer n");
    }
}
