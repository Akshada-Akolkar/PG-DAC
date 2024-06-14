#include <stdio.h>

int main() {
    int days, months, remaining_days;

    // Input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate the number of months and remaining days
    months = days / 30; // Assuming each month has 30 days
    remaining_days = days % 30;

    // Display the result
    printf("%d days is equal to %d months and %d days.\n", days, months, remaining_days);

    return 0;
}

/*
int main()
{
    int days,months,remaining_days;
    printf("Enter the number of days:");
    scanf("%d",&days);
    months = days/30;
    remaining_days=days%30;
    printf("%d days is equal to %d months and days.\n",days,months,remaining_days);
    return 0;
}
*/