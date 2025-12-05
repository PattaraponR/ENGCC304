#include <stdio.h>
#include <stdlib.h>

int GetSet (int **array) {
    int i, n;

    scanf("%d", &n);

    *array = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        scanf("%d", &(*array)[i]);
    }

    return n;
}

int main() {
    int *data, num;
    
    num = GetSet(&data);

    if (data != NULL) {
        for (int i = 0; i < num; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");

        free(data);
    }
    
    return 0;
}
