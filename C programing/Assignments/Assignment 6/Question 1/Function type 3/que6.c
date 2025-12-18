#include <stdio.h>

void calculateDiscount(float price); // function declaration

void main() {
    float amount;
    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    calculateDiscount(amount); // function call with argument
}

void calculateDiscount(float price) { // function definition
    char student;
    float discount, finalAmount;

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student); // space before %c to avoid buffer issue

    if(student == 'y' || student == 'Y') {
        // Student discount
        if(price > 500)
            discount = price * 0.20; // 20%
        else
            discount = price * 0.10; // 10%
    } else {
        // Non-student discount
        if(price > 600)
            discount = price * 0.15; // 15%
        else
            discount = 0; // No discount
    }

    finalAmount = price - discount;
    printf("Discount = %.2f\n", discount);
    printf("Final Amount to Pay = %.2f\n", finalAmount);
}
