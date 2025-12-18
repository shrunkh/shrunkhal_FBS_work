#include <stdio.h>

int main() {
    int num = 121;     
    int rev = 0;
    int a, b, c;

    
    a = num / 100;        
    b = (num / 10) % 10;  
    c = num % 10;         

    rev = c * 100 + b * 10 + a;

    if (num == rev) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }

    return 0;
}
