#include <stdio.h>

void calculateDiscount(); // function declaration

void main() {
    calculateDiscount(); // function call
}

void calculateDiscount() { // function definition
    float price, discount, finalAmount;
    char student;

    printf("Enter purchase amount: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student); // space before %c to clear buffer

    if(student == 'y' || student == 'Y') {
        // Student discount rules
        if(price > 500)
            discount = price * 0.20;  // 20%
        else
            discount = price * 0.10;  // 10%
    }
    else {
        // Non-student discount rules
        if(price > 600)
            discount = price * 0.15;  // 15%
        else
            discount = 0;  // No discount
    }

    finalAmount = price - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final Amount to Pay = %.2f\n", finalAmount);
}
