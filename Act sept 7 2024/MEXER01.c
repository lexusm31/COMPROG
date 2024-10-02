#include <stdio.h>

int main() {
    
    float distance;
    float fare = 20.00;
    int extraMeters, increments;
    
    printf("Input: ");
    scanf("%f", &distance);
    
    if (distance <= 300) {
        printf("Output: P %.2f (The fare is P20.00 for the first 300 meters)\n", fare);
    } else {
        extraMeters = distance - 300;
        increments = extraMeters / 200; 
        if (extraMeters % 200 != 0) {
            fare += increments * 2.00;
        } else {
            fare += increments * 2.00;
        }

        if (increments == 1) {
            printf("Output: P %.2f (P 20.00 for the first 300 meters, then %d meter is charged as one increment of 200 meters)\n", fare, extraMeters);
        } else {
            printf("Output: P %.2f (P 20.00 for the first 300 meters, and %d meters is charged as %d increments of 200 meters)\n", fare, extraMeters, increments);
        }
    } 
    
    return 0;
}
