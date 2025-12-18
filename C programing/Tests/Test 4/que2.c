#include <stdio.h>

void main() {
    int base, exponent, result = 1;

    
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    
    for (int i = 1; i <= exponent; i++) {
        result *= base;  
    }

    
    printf("%d^%d = %d\n", base, exponent, result);

}
