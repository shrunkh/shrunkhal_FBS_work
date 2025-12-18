#include <stdio.h>

void checkPalindrome(int n)   // With argument, No return type
{
    int temp = n, rev = 0, digit;

    while(temp > 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if(rev == n)
        printf("%d is Palindrome", n);
    else
        printf("%d is Not Palindrome", n);
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    checkPalindrome(num);   // Passing argument
}
