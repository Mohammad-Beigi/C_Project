#include "main.h"

int main()
{
    char player1 = 0;
    char player2 = 0;

    printf("...<<< Rock Paper Scissor >>>...\n");

    srand(time(NULL));

    while(TRUE)
    {
        printf("Enter 'r' for 'Rock', 'p' for Paper, and 's' for 'Scissor': ");
        scanf("%c", &player1);
        
        switch (player1)
        {
        case 'r':
            printf("You entered 'Rock'\n");
            break;
        case 'p':
            printf("You entered 'Paper'\n");
            break;
        case 's':
            printf("You entered 'Scissor'\n");
            break;
        default:
            printf("You entered a wrong character. Try again.\n");
            break;
        }

        switch (rand()%3)
        {
        case 0:
            player2 = 'r';
            break;
        case 1:
            player2 = 'p';
            break;
        case 2:
            player2 = 's';
            break;
        default:
            break;
        }

        switch (game(player1, player2))
        {
        case 0:
            printf("You lose!\n");
            break;
        case 1:
            printf("Draw\n");
            break;
        case 2:
            printf("You Win!\n");
            break;
        default:
            break;
        }
        getchar();
    }
    return 0;
}

int game(char const p1, char const p2)
{
    if (p1 == p2)
        return 1;
    else if (p1=='s' && p2=='p')
        return 2;
    else if (p1=='p' && p2=='s')
        return 0;
    else if (p1=='r' && p2=='p')
        return 0;
    else if (p1=='p' && p2=='r')
        return 2;
    else
        return -1;
}