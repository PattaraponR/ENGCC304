#include <stdio.h>

int main() {
    int N, cC, i;
    float iB, pF, amt;
    float cB, tP = 0.0;
    float rate, interest;

    if (scanf("%f %f %d", &iB, &pF, &N) != 3) {
        return 1;
    }

    cB = iB;
    printf("Starting Balance: %.2f\n", iB);

    for (i = 1; i <= N; i++) {
        if (scanf("%d %f", &cC, &amt) != 2) {
            break;
        }

        printf("--- Month %d ---\n", i);

        switch (cC) {
            case 1:
                cB += amt;
                printf("Deposit: %.2f\n", amt);
                break;

            case 2:
                if (amt <= cB) {
                    cB -= amt;
                    printf("Withdrawal: %.2f\n", amt);
                } else {
                    tP += pF;
                    printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", pF);
                }
                break;

            case 3:
                if (cB < 500.00) {
                    rate = 0.010;
                } else {
                    rate = 0.025;
                }
                
                interest = cB * rate;
                cB += interest;

                printf("Interest: %.2f (Rate: %.2f%%)\n", interest, rate * 100.0);
                break;

            case 4:
                printf("Current Balance: %.2f\n", cB);
                break;

            default:
                printf("Invalid Command.\n");
                break;
        }
    }

    printf("Final Balance: %.2f\n", cB);
    printf("Total Penalties: %.2f\n", tP);
    return 0;
}
