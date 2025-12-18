#include <stdio.h>

int main() {
    int a = 15, b = 25, c = 10;  

    if (a > b) {
        if (a > c) {
            printf("The greatest number is %d\n", a);
        }
        else {
            printf("The greatest number is %d\n", c);
        }
    }
    else {
        if (b > c) {
            printf("The greatest number is %d\n", b);
        }
        else {
            printf("The greatest number is %d\n", c);
        }
    }

    return 0;
}
