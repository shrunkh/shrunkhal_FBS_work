#include <stdio.h>


void addArrays(int arr[], int brr[], int crr[], int size) {
    for (int i = 0; i < size; i++) {
        crr[i] = arr[i] + brr[i]; 
    }
}


void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[5]; // Third array to store the sum

    // Adding arrays
    addArrays(arr, brr, crr, 5);

    
    printf("Array 1: ");
    displayArray(arr, 5);

    printf("Array 2: ");
    displayArray(brr, 5);

    printf("Sum Array: ");
    displayArray(crr, 5);

    return 0;
}
