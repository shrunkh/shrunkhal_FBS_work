#include <stdio.h>
#include <stdlib.h>

struct SalesManager {
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;
};


void storeByValue(struct SalesManager sm) {
    printf("\n--- Store by Value ---\n");
    printf("Enter ID: ");
    scanf("%d", &sm.id);
    printf("Enter Name: ");
    scanf("%s", sm.name);
    printf("Enter Salary: ");
    scanf("%f", &sm.salary);
    printf("Enter Incentive: ");
    scanf("%f", &sm.incentive);
    printf("Enter Target: ");
    scanf("%d", &sm.target);

    printf("\nInside function (Pass by Value):\n");
    printf("ID: %d, Name: %s, Salary: %.2f, Incentive: %.2f, Target: %d\n",
           sm.id, sm.name, sm.salary, sm.incentive, sm.target);
}


void displayByAddress(struct SalesManager *sm) {
    printf("\n--- Display by Address ---\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\nIncentive: %.2f\nTarget: %d\n",
           sm->id, sm->name, sm->salary, sm->incentive, sm->target);
}


void storeArray(struct SalesManager arr[], int n) {
    for(int i=0;i<n;i++){
        printf("\nEnter details for SalesManager %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &arr[i].id);
        printf("Name: ");
        scanf("%s", arr[i].name);
        printf("Salary: ");
        scanf("%f", &arr[i].salary);
        printf("Incentive: ");
        scanf("%f", &arr[i].incentive);
        printf("Target: ");
        scanf("%d", &arr[i].target);
    }
}


void displayArray(struct SalesManager arr[], int n) {
    printf("\n--- Display Array of SalesManagers ---\n");
    for(int i=0;i<n;i++){
        printf("\nSalesManager %d:\n", i+1);
        printf("ID: %d\nName: %s\nSalary: %.2f\nIncentive: %.2f\nTarget: %d\n",
               arr[i].id, arr[i].name, arr[i].salary, arr[i].incentive, arr[i].target);
    }
}


int main() {
    struct SalesManager sm1;  
    int n;


    storeByValue(sm1);

    
    printf("\nEnter details for SalesManager (Pass by Address):\n");
    scanf("%d %s %f %f %d", &sm1.id, sm1.name, &sm1.salary, &sm1.incentive, &sm1.target);
    displayByAddress(&sm1);

    
    printf("\nEnter number of SalesManagers: ");
    scanf("%d", &n);

    struct SalesManager *arr = (struct SalesManager*)malloc(n*sizeof(struct SalesManager));

    storeArray(arr, n);
    displayArray(arr, n);

    free(arr);
    return 0;
}
