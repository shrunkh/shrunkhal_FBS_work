#include <stdio.h>

struct Product {
    int id;
    char name[20];
    int quantity;
    float price;
};


void displayByValue(struct Product p) {
    printf("\n[Pass by Value]");
    printf("\nID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n",
           p.id, p.name, p.quantity, p.price);
}


void storeArray(struct Product p[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nEnter Product %d Details\n", i + 1);
        printf("ID: ");
        scanf("%d", &p[i].id);
        printf("Name: ");
        scanf("%s", p[i].name);
        printf("Quantity: ");
        scanf("%d", &p[i].quantity);
        printf("Price: ");
        scanf("%f", &p[i].price);
    }
}

void displayArray(struct Product p[], int n) {
    int i;
    printf("\n[Pass by Address - Array]\n");
    for(i = 0; i < n; i++) {
        printf("\nProduct %d\n", i + 1);
        printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n",
               p[i].id, p[i].name, p[i].quantity, p[i].price);
    }
}


void storeByAddress(struct Product *p) {
    printf("\nEnter Single Product Details\n");
    printf("ID: ");
    scanf("%d", &p->id);
    printf("Name: ");
    scanf("%s", p->name);
    printf("Quantity: ");
    scanf("%d", &p->quantity);
    printf("Price: ");
    scanf("%f", &p->price);
}

void displayByAddress(struct Product *p) {
    printf("\n[Pass One Structure by Address]");
    printf("\nID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n",
           p->id, p->name, p->quantity, p->price);
}

void main() {
    struct Product p1;
    struct Product arr[2];

    
    storeByAddress(&p1);
    displayByAddress(&p1);

    
    displayByValue(p1);

    
    storeArray(arr, 2);
    displayArray(arr, 2);
}
