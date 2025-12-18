// que 2 WAP to check if the year is leap year or not

#include <stdio.h>

int main() {
    int year = 2003;   

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year", year);
    } else {
        printf("%d is NOT a Leap Year", year);
    }

    return 0;
}
