#include <stdio.h>


void checkVote(int *age)
{
    if (*age >= 18)
    {
        printf("Person is eligible to vote.\n");
    }
    else
    {
        printf("Person is NOT eligible to vote.\n");
    }
}

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    
    checkVote(&age);

    return 0;
}
