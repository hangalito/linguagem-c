#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 49
#define MIN_BET 6
#define NUM_LIN 7

void init_random();
void init(int v[NUMS]);
int read_and_bet();
void generate(int* v, int n);
void show(int res[]);

void init_random()
{
    long long ultime;
    time(&ultime);
    srand((unsigned)ultime);
}

void init(int v[NUMS])
{
    int i;
    for (i = 0; i < NUMS; i++)
        v[i] = 0;
}

int read_and_bet()
{
    int n;
    do
    {
        printf("How many numbers do you want to bet (0 - Exit): ");
        scanf("%d", &n);
    }
    while ((n < MIN_BET || n > NUMS) && n != 0);
    return n;
}

void generate(int* v, int n)
{
    int i, index;
    for (i = 1; i <= n; i++)
    {
        index = rand() % NUMS;
        if (v[index] == 0)
        {
            v[index] = 1;
        }
        else
        {
            i--;
        }
    }
}

void show(int res[])
{
    int i;
    for (i = 0; i < NUMS; i++)
    {
        if (res[i] == 0)
            printf(" %2d", i + 1);
        else
            printf(" XX");
        if ((i + 1) % NUM_LIN == 0) putchar('\n');
    }
    putchar('\n');
}

main()
{
    int vector[NUMS];
    int n_nums;

    init_random();
    while (1)
    {
        init(vector);
        if ((n_nums = read_and_bet()) == 0) break;
        generate(vector, n_nums);
        show(vector);
    }
}
