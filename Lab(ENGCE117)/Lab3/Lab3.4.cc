#include <stdio.h>

struct stu {
    char name[50];
    int age;
};


void GetStudent(struct stu d[][10], int *r) {
    printf("Enter number of classrooms (max 20): ");
    scanf("%d", r);

    if (*r < 1 || *r > 20) {
        printf("Invalid number of classerooms.\n");
        return;
    }

    for (int i = 0; i < *r; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Student %d name: ", j+1);
            scanf("%s", d[i][j].name);
            printf("Student %d age: ", j+1);
            scanf("%d", &d[i][j].age);
        }
    }
}

void showResult(struct stu d[][10], int r) {
    for (int i = 0; i < r; i++) {
        printf("\nClassroom %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d. %s, Age: %d\n", j + 1, d[i][j].name, d[i][j].age);
        }
    }
}

int main() {
    struct stu data[20][10];
    int room;
    GetStudent(data, &room);
    showResult(data, room);

    return 0;
}
