#include <stdio.h>

void checkLeapYear(int *y);   

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    checkLeapYear(&year);   

    return 0;
}


void checkLeapYear(int *y)
{
    if ((*y % 400 == 0) || (*y % 4 == 0 && *y % 100 != 0))
    {
        printf("%d is a Leap Year", *y);
    }
    else
    {
        printf("%d is Not a Leap Year", *y);
    }
}
