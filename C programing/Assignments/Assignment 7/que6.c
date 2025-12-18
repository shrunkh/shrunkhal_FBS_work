#include <stdio.h>


int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


void checkStrong(int *num) {
    int n = *num;
    int sum = 0;
    int temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is a Strong Number.\n", n);
    } else {
        printf("%d is not a Strong Number.\n", n);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    
    checkStrong(&n);

    return 0;
}
