#include <stdio.h>

float calculateSalary(); // function declaration

void main() {
    float total;
    total = calculateSalary(); // function call

    printf("Total Salary = %.2f\n", total);
}

float calculateSalary() { // function definition
    float basic, da, ta, hra, total;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if(basic <= 5000) {
        da  = basic * 0.10;  // 10%
        ta  = basic * 0.20;  // 20%
        hra = basic * 0.25;  // 25%
    } else {
        da  = basic * 0.15;  // 15%
        ta  = basic * 0.25;  // 25%
        hra = basic * 0.30;  // 30%
    }

    total = basic + da + ta + hra;
    return total; // returning total salary
}
