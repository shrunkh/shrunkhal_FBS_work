#include <stdio.h>

int checkEligible(int age);  // function declaration

void main() {
    int a, result;

    printf("Enter age: ");
    scanf("%d", &a);

    result = checkEligible(a); // function call with argument

    if(result == 1)
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote\n");
}

int checkEligible(int age) {  // function definition
    if(age >= 18)
        return 1;  // eligible
    else
        return 0;  // not eligible
}
