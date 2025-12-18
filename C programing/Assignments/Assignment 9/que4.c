#include <stdio.h>


void findOddEven(int arr[], int size) {
    int i;
    printf("Even numbers: ");
    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\nOdd numbers: ");
    for(i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    findOddEven(arr, n);
    
    return 0;
}
