#include <stdio.h>

int main() {
    float hours, minutes, seconds;
    int total_seconds;

    // Input time in hours, minutes, and seconds
    printf("Enter time:\n");
    printf("Hours: ");
    scanf("%f", &hours);
    printf("Minutes: ");
    scanf("%f", &minutes);
    printf("Seconds: ");
    scanf("%f", &seconds);

    // Convert time to total seconds
    total_seconds = (hours * 3600) + (minutes * 60) + seconds;

    // Output the result
    printf("Total time in seconds = %d\n", total_seconds);

    return 0;
}
