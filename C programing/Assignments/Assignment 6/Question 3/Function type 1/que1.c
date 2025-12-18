#include <stdio.h>

void checkEvenOdd()   // no return type, no arguments
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("%d is Even", n);
    else
        printf("%d is Odd", n);
}

void main()
{
    checkEvenOdd();
}
