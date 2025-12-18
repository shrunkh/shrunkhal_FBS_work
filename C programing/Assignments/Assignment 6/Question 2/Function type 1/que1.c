#include <stdio.h>

void printTable(); // Declaration

void main() {
    printTable();
}

void printTable() { // Definition
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);
}
