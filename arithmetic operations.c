# include <stdio.h>

int main() {

    char operate;
    int firstNumber,secondNumber;

    printf("Enter an operator (a, s, m, d): ");
    scanf("%c", &operate);

    printf("Enter two operands: ");
    scanf("%d %d",&firstNumber, &secondNumber);

    switch(operate)
    {
        case 'a':
            printf("%d + %d = %d",firstNumber, secondNumber, firstNumber+secondNumber);
            break;

        case 's':
            printf("%d - %d = %d",firstNumber, secondNumber, firstNumber-secondNumber);
            break;

        case 'm':
            printf("%d * %d = %d",firstNumber, secondNumber, firstNumber*secondNumber);
            break;

        case 'd':
            printf("%d / %d = %d",firstNumber, secondNumber, firstNumber/firstNumber);
            break;

        default:
            printf("Error! operator is not correct");
    }

    return 0;
}

