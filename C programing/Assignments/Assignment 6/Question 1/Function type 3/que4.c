#include <stdio.h>

void findGreatest(int a, int b, int c); // function declaration

void main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    findGreatest(x, y, z); // function call with arguments
}

void findGreatest(int a, int b, int c) { // function definition
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
