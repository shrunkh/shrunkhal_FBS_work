#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements: ", n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    printf("Sum of array: %d\n", sum);
    free(arr);
    return 0;
}
