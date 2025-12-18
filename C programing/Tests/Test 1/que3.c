//que 3 Print last 2 digit of number

#include <stdio.h>

int main() {
    int num = 12345;   

    int lastTwo = num % 100;

    printf("Last two digits = %d", lastTwo);
    return 0;
}
