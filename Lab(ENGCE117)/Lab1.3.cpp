#include <stdio.h>
#include <stdlib.h>

int *GetSet(int *n);

int *GetSet(int *n) {
    int *arr;
    
    scanf("%d", n);
    
    arr = (int *)malloc(*n * sizeof(int));
    
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }

    return arr;
}

int main() {
	int *data, num;
	
	data = GetSet( &num );
    
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    free(data);
    
	return 0;
}
