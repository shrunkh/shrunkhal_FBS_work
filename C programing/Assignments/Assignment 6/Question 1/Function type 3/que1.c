#include <stdio.h>

void checkEvenOdd(int num);  // function declaration

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    checkEvenOdd(n); // function call with argument
}

void checkEvenOdd(int num) { // function definition
    if(num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}
