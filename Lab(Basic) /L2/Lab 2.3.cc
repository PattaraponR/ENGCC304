#include <stdio.h>

int main() {
    int termCode;
    float investmentAmount;
    float aprRate = 0.0;
    float totalInterest = 0.0;

    if (scanf("%d %f", &termCode, &investmentAmount) != 2) {
        return 1;
    }

    switch (termCode) {
        case 1:
            if (investmentAmount < 5000.0) {
                aprRate = 0.030;
            } else {
                aprRate = 0.040;
            }
            break;

        case 2:
            if (investmentAmount < 10000.0) {
                aprRate = 0.050;
            } else {
                aprRate = 0.065;
            }
            break;

        case 3:
            aprRate = 0.080;
            break;

        default:
            aprRate = -1.0;
            break;
    }

    if (aprRate != -1.0) {
        totalInterest = investmentAmount * aprRate;
        printf("%.2f\n", totalInterest);
    } else {
        printf("Invalid Term Code\n");
    }

    return 0;
}
