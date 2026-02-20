#include <iostream>
#include <cstring>

using namespace std;

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next; // ต้องเพิ่ม next เพื่อเชื่อมต่อ Node
};

class LinkedList {
protected:
    struct studentNode *start, **now; 
public:
    LinkedList() {
        start = nullptr;
        now = &start; // เริ่มต้นให้ now ชี้ไปที่ address ของ start
    }

    ~LinkedList() {
        struct studentNode *temp;
        while (start != nullptr) {
            temp = start;
            start = start->next;
            delete temp;
        }
    }

    void InsNode(const char n[], int a, char s, float g) {
        struct studentNode *newNode = new studentNode;
        strcpy(newNode->name, n);
        newNode->age = a;
        newNode->sex = s;
        newNode->gpa = g;
        newNode->next = *now; // เอา Node ใหม่ไปแทรกหน้าตำแหน่งที่ now ชี้อยู่
        *now = newNode;
    }

    void DelNode() {
        if (*now == nullptr) return;
        struct studentNode *temp = *now;
        *now = (*now)->next; // ข้าม Node ปัจจุบันไป
        delete temp;
    }

    void GoNext() { // ต้องระบุประเภท void
        if (*now != nullptr) {
            now = &((*now)->next); // เลื่อน now ไปชี้ address ของ next ใน node ปัจจุบัน
        }
    }

    virtual void ShowNode() {
        if (*now != nullptr) {
            cout << "List A/C: " << (*now)->name << " " << (*now)->age << " " << (*now)->gpa << endl;
        } else {
            cout << "End of List" << endl;
        }
    }
};

class NewList : public LinkedList {
public:
    void GoFirst() { // ต้องระบุประเภท void
        now = &start; // กลับไปเริ่มที่ต้น List
    }

    virtual void ShowNode() override {
        if (*now != nullptr) {
            cout << "List B (New): " << (*now)->name << " Age: " << (*now)->age << " GPA: " << (*now)->gpa << endl;
        } else {
            cout << "End of List (New)" << endl;
        }
    }
};

int main() {
    LinkedList listA;
    NewList listB;
    LinkedList *listC;

    // ทดสอบ listA
    listA.InsNode("one", 1, 'A', 1.1);
    listA.InsNode("two", 2, 'B', 2.2);
    listA.InsNode("three", 3, 'C', 3.3);
    listA.GoNext();
    listA.ShowNode(); // ควรแสดง "two"

    // ทดสอบ listB (เปลี่ยนจาก InsertNode เป็น InsNode ตามที่ประกาศใน Class)
    listB.InsNode("four", 4, 'D', 4.4);
    listB.InsNode("five", 5, 'E', 5.5);
    listB.InsNode("six", 6, 'F', 6.6);
    listB.GoNext();   // ชี้ที่ five
    listB.DelNode();  // ลบ five (now จะไปชี้ที่ six)
    listB.ShowNode(); // ควรแสดง "six"

    // ทดสอบ Polymorphism
    listC = &listA;
    listC->GoNext();  // เลื่อนไป three
    listC->ShowNode();

    listC = &listB;
    listC->ShowNode(); // จะเรียก ShowNode ของ NewList เพราะเป็น virtual function

    return 0;
}
