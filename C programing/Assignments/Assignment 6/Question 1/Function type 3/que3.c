#include <stdio.h>

void checkCase(char ch); // function declaration

void main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    checkCase(c); // function call with argument
}

void checkCase(char ch) { // function definition
    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase Letter\n");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase Letter\n");
    else
        printf("Invalid input, not an alphabet\n");
}
