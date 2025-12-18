#include <stdio.h>

void checkPerfect(int n); // Declaration

void main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    checkPerfect(num);
}

void checkPerfect(int n) { // Definition
    int i, sum = 0;

    for(i = 1; i <= n/2; i++)
        if(n % i == 0)
            sum += i;

    if(sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");
}
