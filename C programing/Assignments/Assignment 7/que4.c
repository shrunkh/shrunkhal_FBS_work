#include <stdio.h>


void calculateDiscount(float *price, char *isStudent) {
    float discount = 0.0;

    if (*isStudent == 'y' || *isStudent == 'Y') {
        
        if (*price > 500) {
            discount = 0.20 * (*price);  
        } else {
            discount = 0.10 * (*price);  
        }
    } else if (*isStudent == 'n' || *isStudent == 'N') {
      
        if (*price > 600) {
            discount = 0.15 * (*price);  
        } else {
            discount = 0.0;  
        }
    } else {
        printf("Invalid input for student status.\n");
        return;
    }

    printf("Original Price: %.2f\n", *price);
    printf("Discount: %.2f\n", discount);
    printf("Price after discount: %.2f\n", *price - discount);
}

int main() {
    float price;
    char isStudent;

    printf("Enter the price of purchase: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);  

    
    calculateDiscount(&price, &isStudent);

    return 0;
}
