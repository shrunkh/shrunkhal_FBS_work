#include <stdio.h>


void checkPalindrome(int *num) {
    int original = *num;
    int reversed = 0;
    int temp = *num;

    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (reversed == original) {
        printf("%d is a Palindrome\n", original);
    } else {
        printf("%d is Not a Palindrome\n", original);
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkPalindrome(&n);  

    return 0;
}
