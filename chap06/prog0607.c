#include <stdio.h>
#define DIM 3
#define SPACE ' '

void init(char s[][DIM])
{
    int i, j;
    for (i = 0; i < DIM; i++)
        for (j = 0; j < DIM; j++)
            s[i][j] = 0;
}

void show(char s[DIM][DIM])
{
    int i, j;
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; ++j)
            printf("%c  %c", s[i][j], j == DIM - 1 ? ' ' : '|');
        if (i != DIM - 1) printf("\n-----------");
        putchar('\n');
    }
}

main()
{
    char velha[DIM][DIM];
    int posx, posy;
    char ch = '0';
    int n_plays = 0;

    init(velha);
    while (1)
    {
        show(velha);
        printf("Enter a game line row position of the game: ");
        scanf("%d %d", &posx, &posy);

        if (velha[posx][posy] == SPACE)
        {
            velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
            n_plays++;
        }
        else
        {
            printf("Position already occupied\nPlay again!!!\n");
            if (n_plays == DIM * DIM)
                break;
        }
    }
    show(velha);
}
