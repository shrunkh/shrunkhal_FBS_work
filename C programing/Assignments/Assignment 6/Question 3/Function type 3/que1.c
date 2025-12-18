#include <stdio.h>

void checkEvenOdd(int n)   // With argument, No return type
{
    if(n % 2 == 0)
        printf("%d is Even", n);
    else
        printf("%d is Odd", n);
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOdd(num);   // passing argument
}
