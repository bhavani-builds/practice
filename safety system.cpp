#include <stdio.h>

int main() {
    int seatbelt, door;
    printf("Seatbelt (1/0): ");
    scanf("%d", &seatbelt);

    printf("Door Closed (1/0): ");
    scanf("%d", &door);

    int carStart = seatbelt && door;

    printf("Car Start (1/0): %d\n", carStart);
    return 0;
}
