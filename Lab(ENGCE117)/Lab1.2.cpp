#include <stdio.h>
#include <stdlib.h>

void GetSet(int **arr, int *n) {
    
    scanf("%d", n);

    *arr = (int *)malloc(sizeof(int) * (*n));    

    if (*arr == NULL) {
        printf("Allocation FAILED.");
        exit(0);
    }

    for (int i = 0; i < *n; i++) {
        scanf("%d", &(*arr)[i]);
    }
}

int main() {
    int *data, num;
    GetSet(&data, &num);

    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    free(data);
    data = NULL;

    return 0;
}
