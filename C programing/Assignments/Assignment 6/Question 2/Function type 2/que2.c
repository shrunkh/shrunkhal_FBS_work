#include <stdio.h>

int checkPerfect(); // Declaration

void main() {
    if(checkPerfect())
        printf("Perfect");
    else
        printf("Not Perfect");
}

int checkPerfect() { // Definition
    int n, i, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n/2; i++)
        if(n % i == 0)
            sum += i;

    return (sum == n);
}
