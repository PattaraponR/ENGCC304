#include <stdio.h>

struct stu {
    char name[20];
    int age;
    char sex;
    float gpa;
};

void upgrade(struct stu *person); 

int main() {
    struct stu boy; 
    
    boy.sex = 'F';
    boy.gpa = 2.00;
    
    upgrade(&boy);
    
    printf("%.2f", boy.gpa);

    return 0;
}

void upgrade(struct stu *person) {

    if (person->sex == 'M') {
        person->gpa *= 1.1;    
    } else if (person->sex == 'F') {
        person->gpa *= 1.2;
    }
}
