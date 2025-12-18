#include <stdio.h>

int main() {
    int start = 1, end = 5;
    int sum = 0;

    while(start <= end) {
        sum += start;
        start++;
    }

    printf("Sum = %d", sum);

    return 0;
}
