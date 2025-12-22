#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);   

    for(i = 0; str[i] != '\0'; i++)
    {
       
        if(!( (str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= '0' && str[i] <= '9') ))
        {
            str[i] = '#';   
        }
    }

    printf("Modified string: %s", str);

    return 0;
}
