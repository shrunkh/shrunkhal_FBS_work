#include <stdio.h>

void findGreatest(); // function declaration

void main() {
    findGreatest(); // function call
}

void findGreatest() { // function definition
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) {
        if(a > c)
            printf("%d is the greatest\n", a);
        else
            printf("%d is the greatest\n", c);
    } else {
        if(b > c)
            printf("%d is the greatest\n", b);
        else
            printf("%d is the greatest\n", c);
    }
}
