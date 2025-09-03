#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number :\n");
    if (scanf("%d", &n) != 1) {
        printf("Please Enter number\n");
        return 0;
    }

    int i = n;
    if (i >= 2) {
        do {
            int j = 2;
            if (j * j <= i) {        
                do {
                    if (i % j == 0) break;  
                    j++;
                } while (j * j <= i);
            }
            if (j * j > i) {           
                printf("%d ", i);
            }
            i--;
        } while (i >= 2);
    }
    printf("\n");
    return 0;
}
