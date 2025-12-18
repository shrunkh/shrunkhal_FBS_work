#include <stdio.h>

int printTable(int n); // Declaration

void main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printTable(num);
}

int printTable(int n) { // Definition
    int i;
    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);

    return 1; // return success
}
