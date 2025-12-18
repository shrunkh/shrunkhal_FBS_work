#include <stdio.h>

void checkNumber()   // no return type, no arguments
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0)
        printf("%d is Positive", n);
    else if(n < 0)
        printf("%d is Negative", n);
    else
        printf("Number is Zero");
}

void main()
{
    checkNumber();
}
