#include <stdio.h>

int main() {
    int att, medical;
    printf("Attendance: ");
    scanf("%d", &att);

    printf("Medical certificate (1/0): ");
    scanf("%d", &medical);

    int allowed = (att >= 75) || (medical == 1);

    printf("Allowed (1=True, 0=False): %d\n", allowed);
    return 0;
}
