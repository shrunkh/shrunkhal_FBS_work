#include <stdio.h>

void checkVowelConsonant(char ch); // function declaration

void main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    checkVowelConsonant(c); // function call with argument
}

void checkVowelConsonant(char ch) { // function definition
    
    if(ch >= 'A' && ch <= 'Z')
        ch = ch + 32;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Vowel\n");
    else if(ch >= 'a' && ch <= 'z')
        printf("Consonant\n");
    else
        printf("Invalid input, not an alphabet\n");
}
