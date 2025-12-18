#include <stdio.h>

int main() {
    int minutes = 125;   
    int hours, remaining_minutes;

    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    printf("Minutes = %d\n", minutes);
    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d\n", remaining_minutes);

    return 0;
}
