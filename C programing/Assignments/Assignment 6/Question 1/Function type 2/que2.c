#include <stdio.h>

int checkEligible();  // function declaration

void main() {
    int result;
    result = checkEligible();  // function call

    if(result == 1)
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote\n");
}

int checkEligible() {  // function definition
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
        return 1;   // eligible
    else
        return 0;   // not eligible
}
