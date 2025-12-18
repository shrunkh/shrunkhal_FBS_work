void main()
{
    int n, num, rem, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for(num = 1; num <= n; num++)
    {
        int temp = num;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }
}
