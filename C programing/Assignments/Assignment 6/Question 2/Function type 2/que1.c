#include <stdio.h>

int printTable(); // Declaration

void main() {
    printTable();
}

int printTable() { // Definition
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);

    return 0; // returning something because return type is int
}
