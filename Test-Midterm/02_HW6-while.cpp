#include <stdio.h>

int main() {
    int n, i, j;
    int checkPrime;

    printf("Enter number:\n");

    if (scanf("%d", &n) != 1) {
        printf("โปรดใส่เลขจำนวนเต็ม\n");
    } else {
        i = n;
        while (i >= 2) {
            checkPrime = 1;
            j = 2;
            while (j * j <= i) {
                if (i % j == 0) {
                    checkPrime = 0;
                    break;
                }
                j++;
            }
            if (checkPrime) {
                printf("%d ", i);
            }
            i--;
        }
    }

    return 0;
}
