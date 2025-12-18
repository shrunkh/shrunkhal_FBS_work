#include <stdio.h>
#include <math.h>


void checkArmstrong(int *num);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    checkArmstrong(&n);

    return 0;
}

// Function definition
void checkArmstrong(int *num) {
    int original = *num;
    int sum = 0, temp = *num;
    int digits = 0;

    // Count number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = *num;

    
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
}
