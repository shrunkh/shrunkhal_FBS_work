#include <stdio.h>

struct Admin {
    int id;
    char name[20];
    float salary;
    float allowance;
};

int main() {
    struct Admin a;

    printf("Enter Admin ID: ");
    scanf("%d", &a.id);

    printf("Enter Admin Name: ");
    scanf("%s", a.name);

    printf("Enter Salary: ");
    scanf("%f", &a.salary);

    printf("Enter Allowance: ");
    scanf("%f", &a.allowance);

    printf("\n--- Admin Details ---\n");
    printf("ID        : %d\n", a.id);
    printf("Name      : %s\n", a.name);
    printf("Salary    : %.2f\n", a.salary);
    printf("Allowance : %.2f\n", a.allowance);

    return 0;
}
