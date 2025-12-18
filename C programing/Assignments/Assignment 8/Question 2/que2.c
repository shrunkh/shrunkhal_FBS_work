#include <stdio.h>
void main() {
    int n, i, a[50], num, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i=0; i<n; i++){
        if(a[i] == num){
            found = 1;
            break;
        }
    }

    if(found) printf("Found");
    else printf("Not Found");
}
