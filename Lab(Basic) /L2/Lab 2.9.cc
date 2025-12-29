#include <stdio.h>

int main() {
    int iS, N, cC, q, i;
    float pF;
    int cS;
    float tP = 0.0;

    if (scanf("%d %f %d", &iS, &pF, &N) != 3) {
        return 1;
    }

    cS = iS;

    for (i = 0; i < N; i++) {
        if (scanf("%d %d", &cC, &q) != 2) {
            break;
        }

        switch (cC) {
            case 1:
                cS += q;
                printf("Received %d units.\n", q);
                break;

            case 2:
                if (q <= 0) {
                    printf("Error: Quantity must be positive.\n");
                } else if (q <= cS) {
                    cS -= q;
                    printf("Shipped %d units.\n", q);
                } else {
                    tP += pF;
                    printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", pF);
                }
                break;

            case 3:
                printf("Current Stock: %d\n", cS);
                printf("Total Penalties: %.2f\n", tP);
                break;

            default:
                printf("Error: Invalid Command.\n");
                break;
        }
    }
    
    return 0;
}
