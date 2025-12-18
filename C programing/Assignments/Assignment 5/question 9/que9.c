#include <stdio.h>

void main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            // Print star for borders, space for hollow part
            if(i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  "); // space inside hollow
        }
        printf("\n");
    }

}
