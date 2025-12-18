#include <stdio.h>

void main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);

    // Upper half of the pattern
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for(i = n-1; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

}
