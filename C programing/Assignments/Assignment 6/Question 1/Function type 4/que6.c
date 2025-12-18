#include <stdio.h>

int checkDivisibility(int num); // function declaration

void main() {
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = checkDivisibility(n); // function call with argument

    switch(result) {
        case 1:
            printf("Divisible by both\n");
            break;
        case 2:
            printf("Divisible by 3 but not by 5\n");
            break;
        case 3:
            printf("Divisible by 5 but not by 3\n");
            break;
        case 0:
            printf("Divisible by None\n");
            break;
    }
}

int checkDivisibility(int num) { // function definition
    if(num % 3 == 0 && num % 5 == 0)
        return 1; // divisible by both
    else if(num % 3 == 0)
        return 2; // divisible by 3 only
    else if(num % 5 == 0)
        return 3; // divisible by 5 only
    else
        return 0; // divisible by none
}
