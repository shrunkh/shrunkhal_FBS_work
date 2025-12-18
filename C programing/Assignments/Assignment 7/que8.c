#include <stdio.h>


void factorial(int n, unsigned long long *result) {
    *result = 1; 
    
    for(int i = 1; i <= n; i++) {
        *result = *result * i; 
    }
}

int main() {
    int n;
    unsigned long long fact; 
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    factorial(n, &fact); 
    
    printf("Factorial of %d = %llu\n", n, fact);
    
    return 0;
}
