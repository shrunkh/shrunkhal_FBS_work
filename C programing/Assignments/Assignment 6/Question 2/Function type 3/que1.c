#include <stdio.h>

void checkPrime(int n); // Declaration

void main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    checkPrime(num);
}

void checkPrime(int n) { // Definition
    int i, flag = 0;

    if(n < 2) {
        printf("Not Prime");
        return;
    }

    for(i = 2; i <= n/2; i++)
        if(n % i == 0)
            flag = 1;

    if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
}
