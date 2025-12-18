#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Alternate elements: ");
    for (int i = 0; i < n; i += 2) {   
        printf("%d ", arr[i]);
    }

    return 0;
}
