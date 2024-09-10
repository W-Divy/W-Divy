#include <stdio.h>

int main() {
    int totalSeconds = 31558150; // Earth's revolution time in seconds
    int days, hours, minutes,seconds;

    // Calculate days
    days = totalSeconds / 86400; // 1 day = 24 hours * 60 minutes * 60 seconds

    // Calculate remaining seconds after days
    totalSeconds %= 86400;

    // Calculate hours
    hours = totalSeconds / 3600; // 1 hour = 60 minutes * 60 seconds

    // Calculate remaining seconds after hours
    totalSeconds %= 3600;

    // Calculate minutes
    minutes = totalSeconds / 60;

   seconds= totalSeconds%60;

    // Display the result
    printf("Earth's revolution time:\n");
    printf("Days: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("seconds: %d\n", seconds);


    return 0;
}

