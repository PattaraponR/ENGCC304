#include <stdio.h>

int main() {
    int N, i;
    int sID, score, tC, aC;
    float attP;
    int pC = 0;
    int fC = 0;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for (i = 0; i < N; i++) {
        if (scanf("%d %d %d %d", &sID, &score, &tC, &aC) != 4) {
            break;
        }

        attP = (float)(tC - aC) / tC * 100.0;

        if (score >= 50 && attP >= 75.0) {
            printf("Student %d: PASS\n", sID);
            pC++;
        } else {
            printf("Student %d: FAIL - ", sID);
            fC++;

            int lowS = (score < 50);
            int lowA = (attP < 75.0);

            if (lowS && lowA) {
                printf("Both Score and Attendance\n");
            } else if (lowS) {
                printf("Low Score\n");
            } else {
                printf("Low Attendance (%.2f%%)\n", attP);
            }
        }
    }

    printf("--- Summary ---\n");
    printf("Total PASS: %d\n", pC);
    printf("Total FAIL: %d\n", fC);
    return 0;
}
