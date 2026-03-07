#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

class LinkedList {
protected:
    struct studentNode *start;
    struct studentNode **now;
public:
    LinkedList();
    ~LinkedList();
    void InsNode(char studentName[], int studentAge, char studentSex, float studentGpa);
    void DelNode();
    void GoNext();
    void GoFirst();
    void ShowAll();
    int FindNode(char searchName[]);
    struct studentNode *NowNode();
    void EditNode(char newName[], int newAge, char newSex, float newGpa);
};

// Function Prototypes with meaningful names
void EditData(LinkedList *listPtr);
void AddData(LinkedList *listPtr);
void FindData(LinkedList *listPtr);
void readfile(LinkedList *listPtr);
void writefile(LinkedList *listPtr);

int main() {
    LinkedList listA;
    int menuChoice;

    readfile(&listA);

    do {
        printf("\nMenu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Exit: ");
        scanf("%d", &menuChoice);

        switch (menuChoice) {
            case 1:
                AddData(&listA);
                break;
            case 2:
                EditData(&listA);
                break;
            case 3:
                listA.DelNode();
                break;
            case 4:
                FindData(&listA);
                break;
            case 5:
                listA.ShowAll();
                break;
        }
    } while (menuChoice != 0);

    writefile(&listA);
    return 0;
}

// --- File Handling (Referencing Slides 22 & 25) ---

void writefile(LinkedList *listPtr) {
    FILE *filePointer;
    filePointer = fopen("students.dat", "wb"); // Write Binary Mode [cite: 25, 49]
    
    if (filePointer == NULL) {
        printf("Can't open file!");
        exit(0);
    }

    listPtr->GoFirst();
    struct studentNode *currentNode;
    
    while ((currentNode = listPtr->NowNode()) != NULL) {
        // Write each variable separately as shown in Slide 22 [cite: 219, 245-263]
        fwrite(currentNode->name, sizeof(char[20]), 1, filePointer);
        fwrite(&currentNode->sex, sizeof(char), 1, filePointer);
        fwrite(&currentNode->age, sizeof(int), 1, filePointer);
        fwrite(&currentNode->gpa, sizeof(float), 1, filePointer);
        listPtr->GoNext();
    }
    
    fclose(filePointer);
    printf("Data saved to students.dat\n");
}

void readfile(LinkedList *listPtr) {
    FILE *filePointer;
    filePointer = fopen("students.dat", "rb"); // Read Binary Mode [cite: 26, 297]
    
    if (filePointer == NULL) {
        return;
    }

    char tempName[20];
    char tempSex;
    int tempAge;
    float tempGpa;

    // Read separately as shown in Slide 25 [cite: 284, 305-314]
    while (fread(tempName, sizeof(char[20]), 1, filePointer) != 0) {
        fread(&tempSex, sizeof(char), 1, filePointer);
        fread(&tempAge, sizeof(int), 1, filePointer);
        fread(&tempGpa, sizeof(float), 1, filePointer);
        
        listPtr->GoFirst();
        listPtr->InsNode(tempName, tempAge, tempSex, tempGpa);
    }
    
    fclose(filePointer);
}

// --- LinkedList Implementation ---

LinkedList::LinkedList() {
    start = NULL;
    now = &start;
}

LinkedList::~LinkedList() {
    struct studentNode *tempNode;
    while (start != NULL) {
        tempNode = start;
        start = start->next;
        delete tempNode;
    }
}

void LinkedList::InsNode(char studentName[], int studentAge, char studentSex, float studentGpa) {
    struct studentNode *newNode = new struct studentNode;
    strcpy(newNode->name, studentName);
    newNode->age = studentAge;
    newNode->sex = studentSex;
    newNode->gpa = studentGpa;
    newNode->next = *now;
    *now = newNode;
}

void LinkedList::DelNode() {
    if (*now != NULL) {
        struct studentNode *tempNode = *now;
        *now = (*now)->next;
        delete tempNode;
        printf("Deleted successfully.\n");
    } else {
        printf("No node to delete.\n");
    }
}

void LinkedList::GoFirst() {
    now = &start;
}

void LinkedList::GoNext() {
    if (*now != NULL) {
        now = &((*now)->next);
    }
}

void LinkedList::ShowAll() {
    struct studentNode *tempNode = start;
    printf("\n--- Student List ---\n");
    while (tempNode != NULL) {
        printf("Name: %-15s | Age: %d | Sex: %c | GPA: %.2f\n", 
               tempNode->name, tempNode->age, tempNode->sex, tempNode->gpa);
        tempNode = tempNode->next;
    }
    printf("--------------------\n");
}

int LinkedList::FindNode(char searchName[]) {
    GoFirst();
    while (*now != NULL) {
        if (strcmp((*now)->name, searchName) == 0) {
            return 1;
        }
        GoNext();
    }
    return 0;
}

struct studentNode* LinkedList::NowNode() {
    return *now;
}

void LinkedList::EditNode(char newName[], int newAge, char newSex, float newGpa) {
    if (*now != NULL) {
        strcpy((*now)->name, newName);
        (*now)->age = newAge;
        (*now)->sex = newSex;
        (*now)->gpa = newGpa;
    }
}

// --- Helper Functions ---

void AddData(LinkedList *listPtr) {
    char inputName[20];
    char inputSex;
    int inputAge;
    float inputGpa;

    printf("Enter Name: ");
    scanf("%s", inputName);
    printf("Enter Age: ");
    scanf("%d", &inputAge);
    printf("Enter Sex (M/F): ");
    scanf(" %c", &inputSex);
    printf("Enter GPA: ");
    scanf("%f", &inputGpa);

    listPtr->GoFirst();
    listPtr->InsNode(inputName, inputAge, inputSex, inputGpa);
}

void EditData(LinkedList *listPtr) {
    char targetName[20];
    char newName[20];
    char newSex;
    int newAge;
    float newGpa;

    printf("Enter Name to Edit: ");
    scanf("%s", targetName);

    if (listPtr->FindNode(targetName)) {
        printf("Enter New Name: ");
        scanf("%s", newName);
        printf("Enter New Age: ");
        scanf("%d", &newAge);
        printf("Enter New Sex: ");
        scanf(" %c", &newSex);
        printf("Enter New GPA: ");
        scanf("%f", &newGpa);

        listPtr->EditNode(newName, newAge, newSex, newGpa);
        printf("Updated!\n");
    } else {
        printf("Student not found.\n");
    }
}

void FindData(LinkedList *listPtr) {
    char targetName[20];
    printf("Enter Name to Find: ");
    scanf("%s", targetName);

    if (listPtr->FindNode(targetName)) {
        struct studentNode *foundNode = listPtr->NowNode();
        printf("Found: %s, Age: %d, Sex: %c, GPA: %.2f\n", 
               foundNode->name, foundNode->age, foundNode->sex, foundNode->gpa);
    } else {
        printf("Student not found.\n");
    }
}