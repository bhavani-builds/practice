#include <stdio.h>

int main() {
    int pin;
    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    int access = (pin == 1234);

    printf("Access Granted (1/0): %d\n", access);
    return 0;
}
