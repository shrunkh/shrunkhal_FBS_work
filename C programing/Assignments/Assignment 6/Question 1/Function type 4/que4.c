#include <stdio.h>

int checkTriangleType(float a, float b, float c); // function declaration

void main() {
    float side1, side2, side3;
    int type;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    type = checkTriangleType(side1, side2, side3); // function call with arguments

    switch(type) {
        case 1:
            printf("Equilateral Triangle\n");
            break;
        case 2:
            printf("Isosceles Triangle\n");
            break;
        case 3:
            printf("Scalene Triangle\n");
            break;
        case 0:
            printf("Invalid Triangle\n");
            break;
    }
}

int checkTriangleType(float a, float b, float c) { // function definition
    // Check for triangle validity
    if(a + b <= c || a + c <= b || b + c <= a)
        return 0; // Invalid triangle

    if(a == b && b == c)
        return 1; // Equilateral
    else if(a == b || b == c || a == c)
        return 2; // Isosceles
    else
        return 3; // Scalene
}
