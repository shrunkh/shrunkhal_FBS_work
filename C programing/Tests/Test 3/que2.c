// WAP to add alternate numbers from given range e.g. i/p: start = 1 end = 5 o/p: sum = 9

#include <stdio.h>

int main() {
    int start, end, i, sum = 0;

    printf("Enter start range: ");
    scanf("%d", &start);

    printf("Enter end range: ");
    scanf("%d", &end);

    for(i = start; i <= end; i += 2) {   // add alternate numbers
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}
