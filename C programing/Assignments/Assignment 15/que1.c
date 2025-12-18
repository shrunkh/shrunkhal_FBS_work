#include <stdio.h>

struct Book {
    char bname[50];
    int id;
    char author[30];
    float price;
};

int main() {
    struct Book b;

    
    printf("Enter Book Name: ");
    scanf("%[^\n]%*c", b.bname);  

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Author Name: ");
    scanf(" %[^\n]%*c", b.author); 

    printf("Enter Book Price: ");
    scanf("%f", &b.price);


    printf("\n--- Book Details ---\n");
    printf("Book Name   : %s\n", b.bname);
    printf("Book ID     : %d\n", b.id);
    printf("Author Name : %s\n", b.author);
    printf("Book Price  : %.2f\n", b.price);

    return 0;
}
