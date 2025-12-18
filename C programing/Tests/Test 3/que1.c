// WAP Print even and odd numbers in a given range. e.g. i/p: start = 10, end = 25 o/p: odd: 11 13 15 17 19 21 23 25  e.g. i/p: start= 1 end=15 o/p: even 2 4 6 8 10 12 14 


#include <stdio.h>

int main() {
    int start, end, i;

    printf("Enter start range: ");
    scanf("%d", &start);

    printf("Enter end range: ");
    scanf("%d", &end);

    printf("\nOdd numbers: ");
    for(i = start; i <= end; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\nEven numbers: ");
    for(i = start; i <= end; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
