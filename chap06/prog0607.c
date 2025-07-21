#include <stdio.h>

#define SPACE ' '
#define DIM 3

void init(char s[][DIM])
{
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            s[i][j] = SPACE;
}

void show(char s[DIM][DIM])
{
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
            printf("%c %c", s[i][j], j == DIM - 1 ? ' ' : '|');
        if (i != DIM - 1)printf("\n---------");
        putchar('\n');
    }
}

void evaluate(char s[DIM][DIM], char ch)
{

}

main()
{
    char ticktacktoe[DIM][DIM];
    int posx, posy;
    char ch = '0';
    int n_plays = 0;

    init(ticktacktoe);
    while (1)
    {
        show(ticktacktoe);
        printf("Enter the position to play: ");
        scanf("%d %d", &posx, &posy);
        posx--;
        posy--;

        if (ticktacktoe[posx][posy] == SPACE)
        {
            ticktacktoe[posx][posy] = ch = (ch == '0') ? 'X' : '0';
            n_plays++;
        }
        else
            printf("Position already occupied\nPlay again!!!\n");
        if (n_plays == DIM * DIM)
            break;

        if (
            (ticktacktoe[0][0] == ch && ticktacktoe[0][1] == ch && ticktacktoe[0][2] == ch) ||
            (ticktacktoe[1][0] == ch && ticktacktoe[1][1] == ch && ticktacktoe[1][2] == ch) ||
            (ticktacktoe[2][0] == ch && ticktacktoe[2][1] == ch && ticktacktoe[2][2] == ch)
        )
        {
            show(ticktacktoe);
            printf("Player %c wins\n", ch);
            break;
        }
    }
    show(ticktacktoe);
}
