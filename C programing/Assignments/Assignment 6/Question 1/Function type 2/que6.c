#include <stdio.h>

int checkTriangleType(); // function declaration

void main() {
    int type;
    type = checkTriangleType(); // function call

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

int checkTriangleType() { // function definition
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // check for triangle validity
    if(a + b <= c || a + c <= b || b + c <= a)
        return 0; // invalid triangle

    if(a == b && b == c)
        return 1; // equilateral
    else if(a == b || b == c || a == c)
        return 2; // isosceles
    else
        return 3; // scalene
}
