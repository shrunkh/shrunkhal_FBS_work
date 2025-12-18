#include <stdio.h>

struct HR {
    int id;
    char name[20];
    float salary;
    float commission;
};

int main() {
    struct HR h;

    printf("Enter HR ID: ");
    scanf("%d", &h.id);

    printf("Enter HR Name: ");
    scanf("%s", h.name);

    printf("Enter Salary: ");
    scanf("%f", &h.salary);

    printf("Enter Commission: ");
    scanf("%f", &h.commission);

    printf("\n--- HR Details ---\n");
    printf("ID         : %d\n", h.id);
    printf("Name       : %s\n", h.name);
    printf("Salary     : %.2f\n", h.salary);
    printf("Commission : %.2f\n", h.commission);

    return 0;
}
