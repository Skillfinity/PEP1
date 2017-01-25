# include <stdio.h>
#include <conio.h>

int main() {

    char operate;
    double firstNumber,secondNumber;

    printf("Enter an operator (a, s, m, d): ");
    scanf("%c", &operate);

    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);

    switch(operate)
    {
        case 'a':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber+secondNumber);
            break;

        case 's':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber-secondNumber);
            break;

        case 'm':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber*secondNumber);
            break;

        case 'd':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber/secondNumber);
            break;

        default:
            printf("Error! operator is not correct");
    }
    getch();
    return 0;
}

