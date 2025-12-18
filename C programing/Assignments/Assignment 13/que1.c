#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, min, max;
    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    printf("Enter %d elements: ", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    min = max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }

    printf("Minimum: %d, Maximum: %d\n", min, max);
    free(arr);
    return 0;
}
