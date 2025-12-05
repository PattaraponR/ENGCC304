#include <stdio.h>
#include <stdlib.h>

void GetMatrix(int **value, int *row, int *col) {
    int i, j;
    
    scanf("%d %d", row, col);
    
    *value = (int *)malloc((*row) * (*col) * sizeof(int));
    
    for (i = 0; i < *row; i++) {
        for (j = 0; j < *col; j++) {
            scanf("%d", &(*value)[i * (*col) + j]);
        }
    }
}

int main() {
    int *data, m, n;
    
    GetMatrix(&data, &m, &n);

    if (data != NULL) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", data[i * n + j]);
            }
            printf("\n");
        }

        free(data);
    }
    
    return 0;
}
