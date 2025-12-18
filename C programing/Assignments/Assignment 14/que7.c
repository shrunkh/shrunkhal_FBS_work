#include <stdio.h>

struct Time {
    int hour, min, sec;
};


struct Time storeByValue() {
    struct Time t;
    printf("\n[Pass by Value] Enter hour min sec: ");
    scanf("%d%d%d", &t.hour, &t.min, &t.sec);
    return t;
}

void displayByValue(struct Time t) {
    printf("Time (Value) = %02d:%02d:%02d\n",
           t.hour, t.min, t.sec);
}


void storeArray(struct Time t[], int n) {
    for(int i=0;i<n;i++) {
        printf("\n[Array] Enter time %d (h m s): ", i+1);
        scanf("%d%d%d", &t[i].hour, &t[i].min, &t[i].sec);
    }
}

void displayArray(struct Time t[], int n) {
    for(int i=0;i<n;i++) {
        printf("Time %d = %02d:%02d:%02d\n",
               i+1, t[i].hour, t[i].min, t[i].sec);
    }
}


void storeByAddress(struct Time *t) {
    printf("\n[Pass by Address] Enter hour min sec: ");
    scanf("%d%d%d", &t->hour, &t->min, &t->sec);
}

void displayByAddress(struct Time *t) {
    printf("Time (Address) = %02d:%02d:%02d\n",
           t->hour, t->min, t->sec);
}


void main() {

    struct Time t1, t2;
    struct Time arr[2];

    
    t1 = storeByValue();
    displayByValue(t1);

    
    storeArray(arr, 2);
    displayArray(arr, 2);

    storeByAddress(&t2);
    displayByAddress(&t2);
}
