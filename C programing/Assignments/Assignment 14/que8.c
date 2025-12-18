#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

int main() {
    struct Complex c;

    printf("Enter Real Part: ");
    scanf("%f", &c.real);

    printf("Enter Imaginary Part: ");
    scanf("%f", &c.imaginary);

    printf("\n--- Complex Number ---\n");
    printf("Complex Number: %.2f + %.2fi\n", c.real, c.imaginary);

    return 0;
}
