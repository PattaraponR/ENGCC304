#include <stdio.h>

int main() {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    float excessUsage;

    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2) {
        return 1;
    }

    if (planCode == 1) {
        if (dataUsage_GB <= 10.0) {
            totalBill = 299.0;
        } else {
            excessUsage = dataUsage_GB - 10.0;
            totalBill = 299.0 + 10.0 * excessUsage;
        }
    } else if (planCode == 2) {
        if (dataUsage_GB <= 20.0) {
            totalBill = 599.0;
        } else {
            excessUsage = dataUsage_GB - 20.0;
            float excessCharge = 5.0 * excessUsage;
            if (excessCharge > 50.0) {
                excessCharge = 50.0;
            }
            totalBill = 599.0 + excessCharge;
        }
    } else {
        printf("Invalid Plan Code\n");
        return 0;
    }

    printf("%.2f\n", totalBill);

    return 0;
}
