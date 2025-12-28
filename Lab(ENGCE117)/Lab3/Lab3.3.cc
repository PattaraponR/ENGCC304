#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

struct student upgrade(struct student person);

int main() {
    struct student boy;
    boy.sex = 'M';
    boy.gpa = 3.00;
    boy = upgrade(boy);
    printf("%.2f", boy.gpa);
    return 0;
}

struct student upgrade(struct student person) {
    if (person.sex == 'M') {
        person.gpa *= 1.1;
    } else if (person.sex == 'F') {
        person.gpa *= 1.2;
    }
    
    return person;
};
