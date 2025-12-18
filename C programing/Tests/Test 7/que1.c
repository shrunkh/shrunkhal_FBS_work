#include <stdio.h>

void swapPos(int arr[], int x, int y)
{
    int temp;

    x = x - 1;   
    y = y - 1;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int main()
{
    int arr[] = {11, 23, 30, 4, 21, 45, 50};
    int i;
    int x = 3, y = 5;
    int n = 7;

    swapPos(arr, x, y);

    printf("After Swapping:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
