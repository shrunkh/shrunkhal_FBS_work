#include <stdio.h>

int main() {
    int n = 153;
    int temp = n, sum = 0;

    while(temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;  
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
