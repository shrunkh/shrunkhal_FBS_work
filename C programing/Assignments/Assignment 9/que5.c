#include <stdio.h>


void printAlternate(int arr[], int n) {
    printf("Alternate elements of the array are: ");
    for(int i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printAlternate(arr, n);

    return 0;
}
