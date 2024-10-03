#include <stdio.h>

int main() {
  int distance, extra_distance, increments;
  float fare = 20.00;

  printf("Enter the distance in meters: ");
  scanf("%d", &distance);

  if (distance <= 300) {
  } else {
    extra_distance = distance - 300; 
  }
  if (extra_distance > 0) {
    increments = extra_distance / 200; 
    fare += increments * 2.00; 
  }
  if (distance <= 300) {
    printf("P %.2f (The fare is P %.2f for the first 300 meters)\n", fare, fare);
  } else {
    printf("P %.2f (The first 300 meters cost P 20.00, then %d meters is charged as %d increment(s) of 200 meters)\n", fare, extra_distance, increments);
  }
  return 0;
}
