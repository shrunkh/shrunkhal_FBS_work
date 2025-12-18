#include <stdio.h>

void checkEvenOdd(); // function declaration

void main() {
    checkEvenOdd(); // function call
}

void checkEvenOdd() { // function definition
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}
