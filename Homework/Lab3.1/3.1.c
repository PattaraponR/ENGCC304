#include <stdio.h>

int main() {
    float height, base, area;
    
    printf(" Triangle Area Calculator \n");
    printf("H = ");
    if (scanf("%f", &height) != 1) {
        printf("Please enter a number.\n");
        return 1;
    }

    printf("W = ");
    if (scanf("%f", &base) != 1) {
        printf("Please enter a number.\n");
        return 1;
    }

    area = 0.5f * base * height; 
    printf("Area = %.1f\n", area);

    return 0;
}
