#include <stdio.h>

int main() {
    double distance;
    printf("May I have the distance to the destination? (KM)\n");
    scanf("%lf", &distance);
    if (distance < 0) {
        printf("Distance cannot be negative.\n");
    } else if (distance == 0) {
        printf("You are already at the destination.\n");
    } else if (distance < 5) {
        printf("This ride's cost is %.2f THB.\n", distance * 10);
    } else {
        printf("This ride's cost is %.2f THB.\n", distance * 8);
    }
    return 0;
}