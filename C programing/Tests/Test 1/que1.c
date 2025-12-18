// que 1 Convert time entered in hr, min, sec into total sec

#include <stdio.h>

int main() {
    int hr = 2;    
    int min = 20;  
    int sec = 30;  

    int total = hr * 3600 + min * 60 + sec;

    printf("Total seconds = %d", total);
    return 0;
}
