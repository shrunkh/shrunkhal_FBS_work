#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr1, *arr2, *arr3;
    printf("Enter size of arrays: ");
    scanf("%d",&n);

    arr1=(int*)malloc(n*sizeof(int));
    arr2=(int*)malloc(n*sizeof(int));
    arr3=(int*)malloc(n*sizeof(int));

    printf("Enter %d elements for first array: ", n);
    for(int i=0;i<n;i++) scanf("%d",&arr1[i]);

    printf("Enter %d elements for second array: ", n);
    for(int i=0;i<n;i++) scanf("%d",&arr2[i]);

    for(int i=0;i<n;i++) arr3[i]=arr1[i]+arr2[i];

    printf("Sum of two arrays (third array): ");
    for(int i=0;i<n;i++) printf("%d ", arr3[i]);
    printf("\n");

    free(arr1); free(arr2); free(arr3);
    return 0;
}
