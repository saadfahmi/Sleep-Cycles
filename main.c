#include "sleep_calculator.h"

int main() {
    int choice, hour, minute;

    printf("Sleep Cycle Calculator\n");
    printf("1. Calculate ideal sleep times (if you know your wake-up time)\n");
    printf("2. Calculate ideal wake-up times (if you are going to bed now)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter wake-up time (HH MM): ");
        scanf("%d %d", &hour, &minute);
        calculate_sleep_times(hour, minute);
    } else if (choice == 2) {
        printf("Enter current time (HH MM): ");
        scanf("%d %d", &hour, &minute);
        calculate_wake_times(hour, minute);
    } else {
        printf("Invalid choice. Exiting program.\n");
    }

    return 0;
}
