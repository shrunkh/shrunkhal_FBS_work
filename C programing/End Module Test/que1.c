#include <stdio.h>

int isPrime(int n)
{
    int i;
    if(n <= 1)
        return 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int start, end, i, sum = 0;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
    {
        if(isPrime(i))
            sum = sum + i;
    }

    printf("Sum of prime numbers = %d", sum);

    return 0;
}
