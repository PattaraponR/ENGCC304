#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number:\n");

    if (scanf("%d", &n) != 1) {
        printf("โปรดใส่เลขจำนวนเต็ม\n");
    }

    for (i = n; i >= 2; i--) {
        j = 2;
        while (j * j <= i && i % j != 0) {
            j++;
        }
        if (j * j > i) {
            printf("%d ", i);
        }
    }

    return 0;
}
