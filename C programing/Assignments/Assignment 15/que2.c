#include <stdio.h>

struct Time {
    int hrs;
    int min;
    int sec;
};


void displayTime(struct Time t) {
    printf("%02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}


struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result;
    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min + result.sec / 60;
    result.sec %= 60;
    result.hrs = t1.hrs + t2.hrs + result.min / 60;
    result.min %= 60;
    return result;
}


int timeToSeconds(struct Time t) {
    return t.hrs * 3600 + t.min * 60 + t.sec;
}

int main() {
    struct Time t1, t2, sum;

   
    printf("Enter first time (hrs min sec): ");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);

    
    printf("Enter second time (hrs min sec): ");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);

    
    printf("\nFirst Time  : ");
    displayTime(t1);
    printf("Second Time : ");
    displayTime(t2);

    
    sum = addTime(t1, t2);
    printf("\nSum of Times: ");
    displayTime(sum);

    
    printf("\nFirst time in seconds  : %d sec\n", timeToSeconds(t1));
    printf("Second time in seconds : %d sec\n", timeToSeconds(t2));
    printf("Sum time in seconds    : %d sec\n", timeToSeconds(sum));

    return 0;
}
