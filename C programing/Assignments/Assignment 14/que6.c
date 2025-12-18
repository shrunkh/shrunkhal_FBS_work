#include <stdio.h>

struct Date {
    int date;
    int month;
    int year;
};


void storeDate(struct Date d) {
    printf("Enter Date (dd mm yyyy): ");
    scanf("%d %d %d", &d.date, &d.month, &d.year);
    printf("Stored (pass by value) Date: %02d/%02d/%04d\n", d.date, d.month, d.year);
}


void storeDateArray(struct Date *arr, int n) {
    for(int i=0;i<n;i++){
        printf("Enter Date %d (dd mm yyyy): ", i+1);
        scanf("%d %d %d", &arr[i].date, &arr[i].month, &arr[i].year);
    }
}

void displayDateArray(struct Date *arr, int n) {
    printf("\nDates in array:\n");
    for(int i=0;i<n;i++){
        printf("%02d/%02d/%04d\n", arr[i].date, arr[i].month, arr[i].year);
    }
}


void displayDate(struct Date *d) {
    printf("Date (pass by address): %02d/%02d/%04d\n", d->date, d->month, d->year);
}

int main() {
    struct Date d1;
    
    
    storeDate(d1);  // changes won't affect d1

    printf("\nEnter Date (dd mm yyyy) for pass by address: ");
    scanf("%d %d %d", &d1.date, &d1.month, &d1.year);
    displayDate(&d1); // pass structure by address

    
    int n;
    printf("\nEnter number of dates for array: ");
    scanf("%d", &n);

    struct Date arr[n];
    storeDateArray(arr, n);
    displayDateArray(arr, n);

    return 0;
}
