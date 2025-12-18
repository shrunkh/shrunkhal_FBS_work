#include <stdio.h>

int main() {
    int n = 145;
    int temp = n, sum = 0;

    while(temp > 0) {
        int digit = temp % 10;

       
        int fact = 1, i = 1;
        while(i <= digit) {
            fact *= i;
            i++;
        }

        sum += fact;
        temp /= 10;
    }

    if(sum == n)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}
