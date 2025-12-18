#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num){
    if(num<2) return 0;
    for(int i=2;i<=sqrt(num);i++)
        if(num%i==0) return 0;
    return 1;
}

int main() {
    int n, *arr;
    printf("Enter size of array: ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements: ", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Prime numbers: ");
    for(int i=0;i<n;i++) if(isPrime(arr[i])) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
