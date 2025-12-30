#include <stdio.h>

#define SIZE 5

int find_and_update(int *arr_ptr, int size, int search_value, int new_value);
void print_array(int array[], int size);

int main() {
    int numbers[SIZE];
    int search_val;
    int new_val;
    int status;
    int i;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &search_val);
    scanf("%d", &new_val);

    printf("\n--- ARRAY UPDATE REPORT ---\n");
    printf("Array BEFORE Update: ");
    print_array(numbers, SIZE);

    status = find_and_update(numbers, SIZE, search_val, new_val);

    printf("Array AFTER Update: ");
    print_array(numbers, SIZE);

    printf("Status: ");
    if (status == 1) {
        printf("Update SUCCESSFUL.\n");
    } else {
        printf("Value NOT FOUND.\n");
    }

    return 0;
}

int find_and_update(int *arr_ptr, int size, int search_value, int new_value) {
    for (int i = 0; i < size; i++) {
        if (*(arr_ptr + i) == search_value) {
            *(arr_ptr + i) = new_value;
            return 1;
        }
    }
    return 0;
}

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
