#include "main.h"

int main()
{
    float operand1, operand2;
    char operator;
    printf("...<<< Simple Calculator >>>....\n\n");

    while (TRUE)
    {
        scanf("%f %c %f", &operand1, &operator, &operand2);
        switch (operator)
        {
        case '+':
            printf("=%f\n", operand1+operand2);
            break;
        case '-':
            printf("=%f\n", operand1-operand2);
            break;
        case '*':
            printf("=%f\n", operand1*operand2);
            break;
        case '/':
            printf("=%f\n", operand1/operand2);
            break;
        default:
            printf("Not defined!\n");
            break;
        }
    }
    


    return 0;
}