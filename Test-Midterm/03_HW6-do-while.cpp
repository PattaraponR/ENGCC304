#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number:\n");

    if (scanf("%d", &n) != 1) {
        printf("โปรดใส่เลขจำนวนเต็ม\n");
    }

    i = n;
    if (i >= 2) {
        do {
            j = 2;
            while (j * j <= i && i % j != 0) {
                j++;
            }
            if (j * j > i) {
                printf("%d ", i);
            }
            i--;
        } while (i >= 2);
    }

    return 0;
}
