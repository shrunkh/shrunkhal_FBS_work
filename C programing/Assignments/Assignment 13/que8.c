#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d",&n1);
    int *arr1=(int*)malloc(n1*sizeof(int));
    printf("Enter %d elements for first array: ", n1);
    for(int i=0;i<n1;i++) scanf("%d",&arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d",&n2);
    int *arr2=(int*)malloc(n2*sizeof(int));
    printf("Enter %d elements for second array: ", n2);
    for(int i=0;i<n2;i++) scanf("%d",&arr2[i]);

    int *merged=(int*)malloc((n1+n2)*sizeof(int));
    for(int i=0;i<n1;i++) merged[i]=arr1[i];
    for(int i=0;i<n2;i++) merged[n1+i]=arr2[i];

    printf("Merged array: ");
    for(int i=0;i<n1+n2;i++) printf("%d ", merged[i]);
    printf("\n");

    free(arr1); free(arr2); free(merged);
    return 0;
}
