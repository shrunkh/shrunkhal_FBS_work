#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;
    printf("Enter size of array: ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements: ", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Alternate elements: ");
    for(int i=0;i<n;i+=2) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
