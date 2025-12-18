#include <stdio.h>

int searchNumber(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, key, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    
    result = searchNumber(arr, n, key);

    if(result != -1) {
        printf("Number %d found at position %d\n", key, result + 1);
    } else {
        printf("Number %d not found in the array\n", key);
    }

    return 0;
}
