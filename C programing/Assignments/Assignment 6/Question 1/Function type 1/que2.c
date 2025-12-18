#include <stdio.h>

void checkLeapYear(); // function declaration

void main() {
    checkLeapYear(); // function call
}

void checkLeapYear() { // function definition
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is NOT a Leap Year\n", year);
}
