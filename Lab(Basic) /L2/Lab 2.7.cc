#include <stdio.h>

int main() {
    int N, i;
    int FB = 0;
    int F = 0;
    int B = 0;
    int O = 0;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for (i = 1; i <= N; i++) {
        if (i % 15 == 0) {
            FB++;
        } else if (i % 3 == 0) {
            F++;
        } else if (i % 5 == 0) {
            B++;
        } else {
            O++;
        }
    }

    printf("Count FizzBuzz (by 15): %d\n", FB);
    printf("Count Fizz (by 3 only): %d\n", F);
    printf("Count Buzz (by 5 only): %d\n", B);
    printf("Count Other: %d\n", O);
    return 0;
}
