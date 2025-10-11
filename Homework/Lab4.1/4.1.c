#include <stdio.h>

int main() {
    int days;
    int seconds;
    
    printf("Input Days : ");
    if (scanf("%d", &days) != 1) {
        printf("Error\n");
        return 1;
    }
    seconds = days * 86400; 
    printf("%d days = %d seconds\n", days, seconds);
    
    return 0;
}
