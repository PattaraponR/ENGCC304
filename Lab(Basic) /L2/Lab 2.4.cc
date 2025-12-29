#include <stdio.h>

int main() {
    float P, M, I;
    int C = 0;
    const float RATE = 0.01;
    const float PENALTY = 10.0;

    if (scanf("%f %f", &P, &M) != 2) {
        return 1;
    }

    while (P > 0.0) {
        C++;

        I = P * RATE;
        P = P + I;

        if (M < I) {
            P = P + PENALTY;
        }

        P = P - M;

        printf("Month %d: Remaining %.2f\n", C, P);
    }

    printf("Loan settled in %d months.\n", C);
    return 0;
}
