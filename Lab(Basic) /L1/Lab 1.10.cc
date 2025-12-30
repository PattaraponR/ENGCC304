#include <stdio.h>

int main() {
    int clearanceLevel, age, isActive;

    if (scanf("%d %d %d", &clearanceLevel, &age, &isActive) != 3) {
        return 1;
    }

    if (isActive == 1) {
        if (clearanceLevel == 3 || (clearanceLevel == 2 && age >= 25)) {
            printf("Access Granted\n");
        } else {
            printf("Access Denied\n");
        }
    } else {
        printf("Access Denied\n");
    }

    return 0;
}
