#include <stdio.h>

int balance = 5000;  

void deposit(int amt) {
    balance += amt;
    printf("\nAmount Deposited Successfully!");
}

void withdraw(int amt) {
    if (balance < 3000) {
        printf("\nCan't withdraw the amount. Balance is not sufficient!");
    } else {
        balance -= amt;
        printf("\nAmount Withdrawn Successfully!");
    }
}

void main() {
    int choice, amt;

    printf("Initial Balance: %d", balance);
    printf("\n1. Deposit");
    printf("\n2. Withdraw");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter deposit amount: ");
            scanf("%d", &amt);
            deposit(amt);
            break;

        case 2:
            printf("Enter withdraw amount: ");
            scanf("%d", &amt);
            withdraw(amt);
            break;

        default:
            printf("\nInvalid Choice!");
    }

    printf("\nUpdated Balance: %d", balance);
}
