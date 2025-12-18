#include <stdio.h>

void calculate(); // function declaration

void main() {
    calculate(); // function call
}

void calculate() { // function definition
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op); // space before %c to avoid input buffer issue

    switch(op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;

        case '-':
            printf("Result = %d\n", num1 - num2);
            break;

        case '*':
            printf("Result = %d\n", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %d\n", num1 / num2);
            else
                printf("Error! Division by zero not allowed.\n");
            break;

        case '%':
            if(num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Error! Modulus by zero not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }
}
