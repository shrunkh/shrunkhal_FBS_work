#include <stdio.h>

void reverseNumber()   // No return type, No arguments
{
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;          // extract last digit
        rev = rev * 10 + rem;  // store in reverse order
        n = n / 10;            // remove last digit
    }

    printf("Reversed number = %d", rev);
}

void main()
{
    reverseNumber();
}
