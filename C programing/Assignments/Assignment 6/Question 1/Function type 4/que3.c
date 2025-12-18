#include <stdio.h>

float calculateSalary(float basic); // function declaration

void main() {
    float basic, total;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    total = calculateSalary(basic); // function call with argument

    printf("Total Salary = %.2f\n", total);
}

float calculateSalary(float basic) { // function definition
    float da, ta, hra, total;

    if(basic <= 5000) {
        da  = basic * 0.10; // 10%
        ta  = basic * 0.20; // 20%
        hra = basic * 0.25; // 25%
    } else {
        da  = basic * 0.15; // 15%
        ta  = basic * 0.25; // 25%
        hra = basic * 0.30; // 30%
    }

    total = basic + da + ta + hra;
    return total; // returning total salary
}
