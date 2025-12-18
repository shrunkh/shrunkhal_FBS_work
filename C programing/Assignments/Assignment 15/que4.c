#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 5   
#define MAX_CART 10      

struct Product {
    char name[30];
    float price;
    int quantity; 
};


struct CartItem {
    char name[30];
    float price;
    int quantity;
};

int main() {
    struct Product products[MAX_PRODUCTS] = {
        {"Pen", 10.0, 50},
        {"Notebook", 25.0, 30},
        {"Eraser", 5.0, 100},
        {"Pencil", 8.0, 60},
        {"Marker", 20.0, 40}
    };

    struct CartItem cart[MAX_CART];
    int cartCount = 0;
    int choice;
    float total = 0;

    printf("=== Welcome to Simple POS System ===\n");

    do {
        printf("\nAvailable Products:\n");
        printf("%-5s %-15s %-10s %-10s\n", "No", "Name", "Price", "Qty");
        for(int i=0;i<MAX_PRODUCTS;i++){
            printf("%-5d %-15s %-10.2f %-10d\n", i+1, products[i].name, products[i].price, products[i].quantity);
        }

        printf("\nEnter product number to add to cart (0 to checkout): ");
        scanf("%d", &choice);

        if(choice > 0 && choice <= MAX_PRODUCTS){
            int qty;
            printf("Enter quantity: ");
            scanf("%d", &qty);

            if(qty > products[choice-1].quantity){
                printf("Not enough stock!\n");
            } else {
               
                strcpy(cart[cartCount].name, products[choice-1].name);
                cart[cartCount].price = products[choice-1].price;
                cart[cartCount].quantity = qty;
                cartCount++;

                
                products[choice-1].quantity -= qty;

                printf("%d x %s added to cart.\n", qty, products[choice-1].name);
            }
        } else if(choice != 0){
            printf("Invalid choice! Try again.\n");
        }

    } while(choice != 0 && cartCount < MAX_CART);

    
    printf("\n=== Cart Details ===\n");
    printf("%-15s %-10s %-10s %-10s\n", "Name", "Price", "Qty", "Total");
    for(int i=0;i<cartCount;i++){
        float itemTotal = cart[i].price * cart[i].quantity;
        total += itemTotal;
        printf("%-15s %-10.2f %-10d %-10.2f\n", cart[i].name, cart[i].price, cart[i].quantity, itemTotal);
    }

    printf("\nGrand Total: %.2f\n", total);
    printf("Thank you for shopping!\n");

    return 0;
}
