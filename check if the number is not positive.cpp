#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int notPositive = !(n > 0);

    printf("Not positive (1=True, 0=False): %d\n", notPositive);

    return 0;
}
