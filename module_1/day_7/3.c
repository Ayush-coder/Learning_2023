#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time diff;
    int seconds;

    // Convert the time periods to seconds
    int startSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;

    // Calculate the difference in seconds
    seconds = endSeconds - startSeconds;

    // Convert the difference back to hours, minutes, and seconds
    diff.hours = seconds / 3600;
    seconds %= 3600;
    diff.minutes = seconds / 60;
    diff.seconds = seconds % 60;

    return diff;
}

int main() {
    struct Time startTime, endTime, difference;

    // Read the start time
    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Read the end time
    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    // Calculate the difference
    difference = calculateTimeDifference(startTime, endTime);

    // Display the difference
    printf("\nDifference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
