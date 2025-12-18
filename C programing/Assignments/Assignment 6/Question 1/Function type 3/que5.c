#include <stdio.h>

void showResult(int marks); // function declaration

void main() {
    int m;
    printf("Enter marks: ");
    scanf("%d", &m);

    showResult(m); // function call with argument
}

void showResult(int marks) { // function definition
    if(marks > 75)
        printf("Distinction\n");
    else if(marks > 65)
        printf("First Class\n");
    else if(marks > 55)
        printf("Second Class\n");
    else if(marks >= 40)
        printf("Pass Class\n");
    else
        printf("Fail\n");
}
