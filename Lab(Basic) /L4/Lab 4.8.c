#include <stdio.h>

#define MAX_SIZE 10
#define UNVISITED -1
#define VISITED 0

int main() {
    int data[MAX_SIZE];
    int status[MAX_SIZE];
    int N;
    int i, j;
    int count;

    for (i = 0; i < MAX_SIZE; i++) {
        status[i] = UNVISITED;
    }

    if (scanf("%d", &N) != 1) return 0;

    if (N > MAX_SIZE || N < 1) {
        N = MAX_SIZE;
    }

    for (i = 0; i < N; i++) {
        scanf("%d", &data[i]);
    }

    printf("--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", N);
    printf("Recorded Numbers: ");
    for (i = 0; i < N; i++) {
        printf("%d%s", data[i], (i == N - 1) ? "" : " ");
    }
    printf("\n--- FREQUENCY TABLE ---\n");
    printf("Number | Frequency\n");
    printf("-------|----------\n");

    for (i = 0; i < N; i++) {
        if (status[i] == UNVISITED) {
            count = 1;
            for (j = i + 1; j < N; j++) {
                if (data[i] == data[j]) {
                    count++;
                    status[j] = VISITED;
                }
            }
            printf("%d | %d\n", data[i], count);
            status[i] = VISITED;
        }
    }

    return 0;
}
