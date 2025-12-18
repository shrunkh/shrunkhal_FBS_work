#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

void storeValue(struct Distance d) {
    printf("\n[Pass by Value]\n");
    printf("Feet: ");
    scanf("%d", &d.feet);
    printf("Inch: ");
    scanf("%f", &d.inch);
}

void displayValue(struct Distance d) {
    printf("Distance = %d feet %.2f inch\n", d.feet, d.inch);
}


void storeAddress(struct Distance *d) {
    printf("\n[Pass by Address - Single Structure]\n");
    printf("Feet: ");
    scanf("%d", &d->feet);
    printf("Inch: ");
    scanf("%f", &d->inch);
}

void displayAddress(struct Distance *d) {
    printf("Distance = %d feet %.2f inch\n", d->feet, d->inch);
}


void storeArray(struct Distance d[], int n) {
    printf("\n[Pass by Address - Array]\n");
    for(int i=0;i<n;i++) {
        printf("Distance %d\n", i+1);
        printf("Feet: ");
        scanf("%d", &d[i].feet);
        printf("Inch: ");
        scanf("%f", &d[i].inch);
    }
}

void displayArray(struct Distance d[], int n) {
    for(int i=0;i<n;i++) {
        printf("Distance %d = %d feet %.2f inch\n",
               i+1, d[i].feet, d[i].inch);
    }
}

void main() {
    struct Distance d1, d2;
    struct Distance arr[2];

    
    storeValue(d1);
    displayValue(d1);   

    
    storeAddress(&d2);
    displayAddress(&d2);

    
    storeArray(arr, 2);
    displayArray(arr, 2);
}
