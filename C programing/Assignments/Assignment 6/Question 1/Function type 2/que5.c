#include <stdio.h>

int checkAgeCategory();  // function declaration

void main() {
    int category;
    category = checkAgeCategory();  // function call

    switch(category) {
        case 1:
            printf("Child (age < 12)\n");
            break;
        case 2:
            printf("Teenager (12-19)\n");
            break;
        case 3:
            printf("Adult (20-59)\n");
            break;
        case 4:
            printf("Senior (60 and above)\n");
            break;
        default:
            printf("Invalid age\n");
    }
}

int checkAgeCategory() {  // function definition
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 0)
        return 0;  // invalid
    else if(age < 12)
        return 1;  // child
    else if(age >= 12 && age <= 19)
        return 2;  // teenager
    else if(age >= 20 && age <= 59)
        return 3;  // adult
    else
        return 4;  // senior
}
