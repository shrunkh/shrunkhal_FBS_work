#include <stdio.h>

void main()
{
    int num, choice, i, flag, temp, rev, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Sum of Digits\n");
    printf("----------------\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:  
            if(num % 2 == 0)
                printf("\n%d is Even", num);
            else
                printf("\n%d is Odd", num);
            break;

        case 2:   
            flag = 1;
            for(i = 2; i < num; i++)
            {
                if(num % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(num == 1)
                printf("\n1 is neither Prime nor Composite");
            else if(flag == 1)
                printf("\n%d is Prime", num);
            else
                printf("\n%d is Not Prime", num);
            break;

        case 3:   
            temp = num;
            rev = 0;
            while(temp > 0)
            {
                rev = rev * 10 + (temp % 10);
                temp /= 10;
            }
            if(rev == num)
                printf("\n%d is Palindrome", num);
            else
                printf("\n%d is Not Palindrome", num);
            break;

        case 4:   // positive, negative or zero
            if(num > 0)
                printf("\n%d is Positive", num);
            else if(num < 0)
                printf("\n%d is Negative", num);
            else
                printf("\nNumber is Zero");
            break;

        case 5:   
            temp = num;
            rev = 0;
            while(temp > 0)
            {
                rev = rev * 10 + (temp % 10);
                temp /= 10;
            }
            printf("\nReverse of %d is %d", num, rev);
            break;

        case 6:   
            temp = num;
            sum = 0;
            while(temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
            printf("\nSum of digits of %d is %d", num, sum);
            break;

        default:
            printf("\nInvalid Choice!");
    }
}
