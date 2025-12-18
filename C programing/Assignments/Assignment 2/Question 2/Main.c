#include <stdio.h>

int main() {
    int a = 5, b = 5, c = 5;  // Hardcoded sides

    // Check if valid triangle
    if (a + b > c) {
        if (a + c > b) {
            if (b + c > a) {
                // Determine type using nested if
                if (a == b) {
                    if (b == c) {
                        printf("The triangle is Equilateral\n");
                    }
                    else {
                        printf("The triangle is Isosceles\n");
                    }
                }
                else {
                    if (a == c || b == c) {
                        printf("The triangle is Isosceles\n");
                    }
                    else {
                        printf("The triangle is Scalene\n");
                    }
                }
            }
            else {
                printf("Invalid triangle sides!\n");
            }
        }
        else {
            printf("Invalid triangle sides!\n");
        }
    }
    else {
        printf("Invalid triangle sides!\n");
    }

    return 0;
}
