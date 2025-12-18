#include <stdio.h>

int checkPrime(int n); // Declaration

void main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(checkPrime(num))
        printf("Prime");
    else
        printf("Not Prime");
}

int checkPrime(int n) { // Definition
    int i;

    if(n < 2)
        return 0;

    for(i = 2; i <= n/2; i++)
        if(n % i == 0)
            return 0;

    return 1;
}
