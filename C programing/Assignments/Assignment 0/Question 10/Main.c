#include <stdio.h>

int main() {
    int s1 = 78;   
    int s2 = 85;
    int s3 = 90;
    int s4 = 88;
    int s5 = 76;

    int total;
    float percentage;

    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500.0) * 100;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %f\n", percentage);

    return 0;
}
