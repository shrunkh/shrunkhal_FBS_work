#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, key, pos=-1;
    printf("Enter size of array: ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements: ", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter number to search: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(arr[i]==key){ pos=i; break; }
    }

    if(pos!=-1) printf("Number found at index %d\n", pos);
    else printf("Number not found\n");

    free(arr);
    return 0;
}
