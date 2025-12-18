#include <stdio.h>

int getResult(int marks); // function declaration

void main() {
    int m, result;

    printf("Enter marks: ");
    scanf("%d", &m);

    result = getResult(m); // function call with argument

    switch(result) {
        case 1:
            printf("Distinction\n");
            break;
        case 2:
            printf("First Class\n");
            break;
        case 3:
            printf("Second Class\n");
            break;
        case 4:
            printf("Pass Class\n");
            break;
        case 5:
            printf("Fail\n");
            break;
        default:
            printf("Invalid marks\n");
    }
}

int getResult(int marks) { // function definition
    if(marks > 100 || marks < 0)
        return 0; // invalid marks
    else if(marks > 75)
        return 1; // Distinction
    else if(marks > 65)
        return 2; // First Class
    else if(marks > 55)
        return 3; // Second Class
    else if(marks >= 40)
        return 4; // Pass Class
    else
        return 5; // Fail
}
