#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, temp;
    printf("Enter size of array: ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements: ", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0,j=n-1;i<j;i++,j--){
        temp=arr[i]; arr[i]=arr[j]; arr[j]=temp;
    }

    printf("Reversed array: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
