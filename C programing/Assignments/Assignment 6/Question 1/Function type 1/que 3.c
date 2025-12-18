#include <stdio.h>

void checkVowelConsonant(); // function declaration

void main() {
    checkVowelConsonant(); // function call
}

void checkVowelConsonant() { // function definition
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if(ch >= 'A' && ch <= 'Z')
        ch = ch + 32;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a Vowel\n", ch);
    else if((ch >= 'a' && ch <= 'z'))
        printf("%c is a Consonant\n", ch);
    else
        printf("Invalid input, not an alphabet\n");
}
