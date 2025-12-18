#include <stdio.h>

int main() {
    int n = 7;
    int i = 2, isPrime = 1;

    while(i <= n / 2) {
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if(isPrime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
