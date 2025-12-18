#include <stdio.h>

int checkArmstrong(); // Declaration

void main() {
    if(checkArmstrong())
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

int checkArmstrong() { // Definition
    int n, temp, rem, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return (sum == n);
}
