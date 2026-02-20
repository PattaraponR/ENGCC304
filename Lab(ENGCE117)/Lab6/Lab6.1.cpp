#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
    struct studentNode *back;
};

// --- ฟังก์ชัน AddNode: เพิ่มท้ายลิสต์ ---
struct studentNode* AddNode(struct studentNode **start, char name[], int age, char sex, float gpa) {
    struct studentNode *newNode = (struct studentNode*)malloc(sizeof(struct studentNode));
    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->sex = sex;
    newNode->gpa = gpa;
    newNode->next = NULL;

    if (*start == NULL) {
        newNode->back = NULL;
        *start = newNode;
    } else {
        struct studentNode *temp = *start;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
        newNode->back = temp;
    }
    return newNode;
}

// --- ฟังก์ชัน InsNode: แทรกก่อนหน้า now ---
void InsNode(struct studentNode *now, char name[], int age, char sex, float gpa) {
    if (now == NULL) return;
    struct studentNode *newNode = (struct studentNode*)malloc(sizeof(struct studentNode));
    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->sex = sex;
    newNode->gpa = gpa;

    newNode->next = now;
    newNode->back = now->back;
    
    if (now->back != NULL) {
        now->back->next = newNode;
    }
    now->back = newNode;
}

// --- ฟังก์ชัน GoBack: ย้อนกลับไปโหนดก่อนหน้า ---
void GoBack(struct studentNode **now) {
    if ((*now) != NULL && (*now)->back != NULL) {
        *now = (*now)->back;
    }
}

// --- ฟังก์ชัน DelNode: ลบโหนดปัจจุบัน ---
void DelNode(struct studentNode *now) {
    if (now == NULL) return;
    struct studentNode *tmp = now;
    
    if (now->back != NULL) now->back->next = now->next;
    if (now->next != NULL) now->next->back = now->back;

    // การเลื่อนตำแหน่ง now หลังจากลบ (ตามเงื่อนไขโจทย์)
    if (now->next != NULL) {
        *now = *(now->next); // เลื่อนไปตัวถัดไป
    } else if (now->back != NULL) {
        *now = *(now->back); // ถ้าไม่มีตัวถัดไป ให้ถอยกลับ
    }
    free(tmp);
}
