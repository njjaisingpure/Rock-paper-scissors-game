#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int deci_playe(int a)

{
    if (a == 1)
    {
        printf("Rock\n");
    }
    else if (a == 2)
    {
        printf("Paper\n");
    }
    else
    {
        printf("Scissors\n");
    }
}

int deci_comp(int b)
{
    if (b == 1)
    {
        printf("Rock\n");
    }
    else if (b == 2)
    {
        printf("Paper\n");
    }
    else
    {
        printf("Scissors\n");
    }
}

int randomno(void)
{
    int lower = 1;
    int upper = 3;
    srand(time(NULL));
    return (rand() % (upper - lower + 1) + lower);
}

int win(int pc, int cc, char nam[])
{
    if (pc > cc)
    {
        printf("Player %s is the winner\n congraulations\n", nam);
    }
    else if (cc > pc)
    {
        printf("computer is the winner\n you loos,better luck nexttime\n");
    }
    else
    {
        printf("the match is draw\n well played\n");
    }
}
int main()
{
    int pi, ci, l,startkey;
    int pc = 0;
    int cc = 0;
    char name[10];
    {
        printf("Press provided potions\n");
        printf("1. Start\n");
        printf("0. Quit\n");
        scanf("%d",&startkey);
        if(startkey == 1){
            goto game;
        }
        else if(startkey == 0){
            goto exit;
        }
    }
    {
        game:
        getchar;
        printf("Enter your name: ");
        scanf("%s",&name);
        goto begain;
    }
    {
        getchar;
        begain:
        for (int i = 0; i < 3; i++)
        {
            getchar;
            reset:
            printf("player: %s turn \n", name);
            printf("sellect any 1 option:\n");
            printf("1.Rock\n2.Paper\n3.Scissors\n");
            scanf("%d", &pi);
            deci_playe(pi);
            printf("Computer turn\n");
            ci = randomno();
            deci_comp(ci);
            if (pi == 1 && ci == 2 || pi == 2 && ci == 3 || pi == 3 && ci == 1)
            {
                printf("computer wins this round \n");
                cc++;
            }
            else if (pi == 1 && ci == 3 || pi == 2 && ci == 1 || pi == 3 && ci == 2)
            {
                printf("player wins this round \n");
                pc++;
            }
            else
            {
                printf("this round is draw\n");
            }
            printf("points of \n player:-%d and computer:-%d\n", pc, cc);
        }
        win(pc, cc, name);
        resu:
        getchar;
        printf("press 1 to play again and 0 to quit\n");
        scanf("%d", &l);
        if (l == 0)
        {
            goto exit;
        }
        else if(l == 1){
            goto reset;
        }
        else{
            printf("please enter correct option\n");
            goto resu;
        }
    }
exit:
    return 0;
}