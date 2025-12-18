#include <stdio.h>

void sumOfDigits(int n)   // With argument, No return type
{
    int sum = 0, digit;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    sumOfDigits(num);   // passing argument
}
