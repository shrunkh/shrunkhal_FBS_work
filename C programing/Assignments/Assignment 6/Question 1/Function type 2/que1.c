#include <stdio.h>

int checkPalindrome();  // function declaration (returns int)

void main() {
    int result;
    result = checkPalindrome();  // function call

    if(result == 1)
        printf("It is a Palindrome Number\n");
    else
        printf("It is NOT a Palindrome Number\n");
}

int checkPalindrome() {  // function definition
    int num, temp, rev = 0, digit;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if(num == rev)
        return 1;   // palindrome
    else
        return 0;   // not palindrome
}
