#include <stdio.h>

int main() {
    int total_num = 3;
    int num, sum = 0;
    
    printf("input %d numbers : \n", total_num);

    for (int i = 0; i < total_num; i++) {
        if (scanf("%d", &num) != 1) {
            printf("Something Worng!\n");
            return 1; 
        }
        sum += num;
    }

    printf("Answer = %d\n", sum);

    return 0;
}
