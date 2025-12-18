#include <stdio.h>

int checkLeap(int year);  // function declaration

void main() {
    int y, result;

    printf("Enter a year: ");
    scanf("%d", &y);

    result = checkLeap(y);  // function call with argument

    if(result == 1)
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");
}

int checkLeap(int year) {  // function definition
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;   // leap year
    else
        return 0;   // not a leap year
}
