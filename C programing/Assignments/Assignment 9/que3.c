#include <stdio.h>

// Function to calculate sum of array elements
int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];  // Add each element to sum
    }
    return sum;
}

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int total = sumArray(arr, n); // Passing array to function
    printf("Sum of all numbers = %d\n", total);
    
    return 0;
}
