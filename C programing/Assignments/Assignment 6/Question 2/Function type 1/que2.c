#include <stdio.h>

void checkPrime(); // Declaration

void main() {
    checkPrime();
}

void checkPrime() { // Definition
    int n, i, flag = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Not Prime");
        return;
    }

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
}
