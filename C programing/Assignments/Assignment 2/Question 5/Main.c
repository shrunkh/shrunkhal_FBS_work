#include <stdio.h>

int main() {
    float price = 550;   // Hardcoded price
    char isStudent = 'y'; // 'y' for yes, 'n' for no

    float discount = 0;

    if (isStudent == 'y' || isStudent == 'Y') {
        // Student
        if (price > 500) {
            discount = 20;
        } else {
            discount = 10;
        }
    } 
    else {
        // Not a student
        if (price > 600) {
            discount = 15;
        } else {
            discount = 0;
        }
    }

    if (discount > 0) {
        printf("Discount: %.2f%%\n", discount);
        printf("Price after discount: %.2f\n", price - (price * discount / 100));
    } else {
        printf("No discount. Price to pay: %.2f\n", price);
    }

    return 0;
}
