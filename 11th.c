#include <stdio.h>

int main() {
    int totalSeconds, days, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate days
    days = totalSeconds / 86400;  // 86400 seconds in a day
    
    // Calculate hours (remaining hours after full days)
    hours = (totalSeconds % 86400) / 3600;  // 3600 seconds in an hour
    
    // Calculate minutes
    minutes = (totalSeconds % 3600) / 60;  // 60 seconds in a minute
    
    // Calculate seconds
    seconds = totalSeconds % 60;

    // Output the result
    printf("Time is %d day(s) %d hour(s) %d minute(s) %d second(s)\n", days, hours, minutes, seconds);

    return 0;
}
