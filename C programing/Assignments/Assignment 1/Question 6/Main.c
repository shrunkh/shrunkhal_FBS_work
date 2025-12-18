#include <stdio.h>

int main() {
    char ch = 'G';   

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Letter");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Letter");
    }
    else {
        printf("Not an alphabet");
    }

    return 0;
}
