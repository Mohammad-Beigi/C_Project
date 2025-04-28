#include "main.h"

int main()
{
    int player1 = 0;
    printf("...<<< Rock Paper Scissor >>>...");

    while(TRUE)
    {
        printf("Enter your choise:\n");
        printf("Rock------> 1\n");
        printf("Paper-----> 2\n");
        printf("Scissor---> 3\n");
        scanf("%d", &player1);
        printf("You choose %d\n", player1);
    }
    return 0;
}