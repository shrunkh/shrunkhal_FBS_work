#include <stdio.h>


void checkEvenOdd(int *n)
{
    if (*n % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    checkEvenOdd(&num);

    return 0;
}
