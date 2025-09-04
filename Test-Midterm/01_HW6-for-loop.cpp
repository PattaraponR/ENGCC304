#include <stdio.h>

int main() {
    int n, i, j;
    int checkPrime;

    printf("Enter number:\n");

    if (scanf("%d", &n) != 1) {
        printf("โปรดใส่เลขจำนวนเต็ม\n");
    } else {
        for (i = n; i >= 2; i--) {
            checkPrime = 1;
            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    checkPrime = 0;
                    break;
                }
            }
            if (checkPrime) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
