#include <stdio.h>

int checkArmstrong(int n); // Declaration

void main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(checkArmstrong(num))
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

int checkArmstrong(int n) { // Definition
    int temp = n, rem, sum = 0;

    while(temp > 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return (sum == n);
}
