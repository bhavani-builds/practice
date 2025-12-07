#include <stdio.h>

int main() {
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);

    int stop = (temp < 0) || (temp > 100);

    printf("Stop Machine? (1=True, 0=False): %d\n", stop);

    return 0;
}
