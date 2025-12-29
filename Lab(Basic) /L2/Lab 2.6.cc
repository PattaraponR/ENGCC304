#include <stdio.h>

int main() {
    int N, month, SC = 0;
    float DD, MT;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for (month = 1; month <= N; month++) {
        MT = 0.0;

        if (scanf("%f", &DD) != 1) {
            break;
        }

        while (DD != 0.00) {
            MT += DD;

            if (scanf("%f", &DD) != 1) {
                break;
            }
        }

        printf("Month %d Total: %.2f\n", month, MT);
        
        if (MT >= 500.00) {
            SC++;
        }
    }

    printf("Success Count: %d\n", SC);
    return 0;
}
