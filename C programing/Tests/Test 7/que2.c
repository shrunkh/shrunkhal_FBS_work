// check if the array is palindrome or not (using function)

#include <stdio.h>

int isPalindrome(int arr[], int n)
{
    int i;
    for(i = 0; i < n / 2; i++)
    {
        if(arr[i] != arr[n - i - 1])
            return 0;
    }
    return 1;
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if(isPalindrome(arr, n))
        printf("Array is Palindrome");
    else
        printf("Array is NOT Palindrome");

    return 0;
}
