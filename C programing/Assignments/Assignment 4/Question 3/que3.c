#include <stdio.h>

void main()
{
    int n, num, i, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Perfect numbers from 1 to %d are:\n", n);

    for(num = 1; num <= n; num++)
    {
        sum = 0;

        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                sum += i;
            }
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }
}
