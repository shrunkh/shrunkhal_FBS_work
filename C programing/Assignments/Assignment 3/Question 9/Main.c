#include <stdio.h>

int main() {
    int n = 121;
    int temp = n, rev = 0;

    while(temp > 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if(rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
