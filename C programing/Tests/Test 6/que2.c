#include <stdio.h>

void main() {
    int arr[6] = {10, 25, 3, 45, 18, 7};
    
    int max1, max2;

    
    max1 = max2 = arr[0];

    for(int i = 1; i < 6; i++) {
        if(arr[i] > max1) {
            max2 = max1;       
            max1 = arr[i];     
        }
        else if(arr[i] > max2) {
            max2 = arr[i];
        }
    }

    printf("First maximum = %d\n", max1);
    printf("Second maximum = %d\n", max2);

}
