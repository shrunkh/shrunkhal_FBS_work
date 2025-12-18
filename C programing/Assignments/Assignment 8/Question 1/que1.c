#include <stdio.h>
void main() {
    int n, i, a[50], min, max;
    printf("Enter size: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    min = max = a[0];

    for(i=1; i<n; i++){
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }

    printf("Min = %d\nMax = %d", min, max);
}
