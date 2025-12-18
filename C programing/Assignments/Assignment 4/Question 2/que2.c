#include <stdio.h>

void main()
{
    int n, num, i, flag;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(num = 2; num <= n; num++)
    {
        flag = 1;   

        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                flag = 0;  
                break;
            }
        }

        if(flag == 1)
        {
            printf("%d ", num);
        }
    }
}
