#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number :\n");
    if (scanf("%d", &n) != 1) {
        printf("Please Enter number\n");
        return 0;
    }

    int i = n;
    while (i >= 2) {
        int j = 2;
        while (j * j <= i && i % j != 0) {
            j++;
        }
        if (j * j > i) {        
            printf("%d ", i);   
        }
        i--;
    }
    printf("\n");
    return 0;
}
