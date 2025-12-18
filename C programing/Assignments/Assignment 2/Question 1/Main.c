#include <stdio.h>

int main() {
    int a = 20, b = 10;   
    char op = '*';        

    // Nested if
    if (op == '+') {
        printf("Result = %d", a + b);
    }
    else {
        if (op == '-') {
            printf("Result = %d", a - b);
        }
        else {
            if (op == '*') {
                printf("Result = %d", a * b);
            }
            else {
                if (op == '/') {
                    if (b != 0)
                        printf("Result = %d", a / b);
                    else
                        printf("Cannot divide by zero!");
                }
                else {
                    if (op == '%') {
                        if (b != 0)
                            printf("Result = %d", a % b);
                        else
                            printf("Cannot modulo by zero!");
                    }
                    else {
                        printf("Invalid operator!");
                    }
                }
            }
        }
    }

    return 0;
}
