#include <stdio.h>

struct stu {
    char name[50];
    int age;
};

struct stu d[10][10];

struct stu(*GetStudent(int *r))[10];

int main() {
    int r;
    struct stu (*c)[10] = GetStudent(&r);

    for (int i = 0; i < r; i++) {
        printf("\n-----Class %d-----\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Student %d's name: %s, age: %d\n", j + 1, c[i][j].name, c[i][j].age);
        }
    }

    return 0;
}

struct stu(*GetStudent(int *r))[10] {
    printf("Enter number of classrooms: ");
    scanf("%d", r);

    for (int i = 0; i < *r; i++) {
        printf("\n---Class %d---\n", i+1);
        for (int j = 0; j < 10; j++) {
            printf("Enter the student %d's name and age: ", j + 1);
            scanf("%s %d", d[i][j].name, &d[i][j].age);
        }
    }

    return d;
}
