// WAP to check if number is positive, negative, neutral(0)

#include <stdio.h>

void main() {
    int num = 10;   

    if (num > 0) {
        printf("%d is Positive", num);
    }
    else if (num < 0) {
        printf("%d is Negative", num);
    }
    else {
        printf("%d is Neutral (Zero)", num);
    }

}
