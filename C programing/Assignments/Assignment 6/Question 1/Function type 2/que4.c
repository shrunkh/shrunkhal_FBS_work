#include <stdio.h>

int checkDivisibility();  // function declaration

void main() {
    int result;
    result = checkDivisibility();  // function call

    if(result == 1)
        printf("Divisible by both\n");
    else if(result == 2)
        printf("Divisible by 3 but not by 5\n");
    else if(result == 3)
        printf("Divisible by 5 but not by 3\n");
    else
        printf("Divisible by None\n");
}

int checkDivisibility() {  // function definition
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 == 0)
        return 1;   // divisible by both
    else if(num % 3 == 0)
        return 2;   // divisible by 3 only
    else if(num % 5 == 0)
        return 3;   // divisible by 5 only
    else
        return 0;   // divisible by none
}
