#include <stdio.h>

int main() {
    int n = 28;
    int sum = 0;
    int i = 1;

    while(i < n) {
        if(n % i == 0) {
            sum += i;
        }
        i++;
    }

    if(sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");

    return 0;
}
