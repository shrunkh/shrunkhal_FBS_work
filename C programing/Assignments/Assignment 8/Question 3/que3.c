#include <stdio.h>
void main() {
    int n, i, a[50], sum = 0;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum = %d", sum);
}
