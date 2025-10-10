#include <stdio.h> // สะกดผิด ต้องเป็น stdio.h

int main() {
    char Name[50];
    int  Age = 0;
    printf("Enter your name: "); //ลืมเครื่องหมาย ;
    scanf("%s", Name); 
    printf("Enter your age: ");
    scanf("%d", &Age); // ต้องใส่ & หน้าตัวแปร Age
    printf("- - - - - -\n"); // printf ไม่ใช่ print
    printf("Hello %s\n", Name); // ใส่ตัวแปร Name ที่หายไป
    printf("Age = %d\n", Age); // ใส่ตัวแปร Age ที่หายไป
    
    return 0; //return 0; เพื่อจบโปรแกรมอย่างสมบูรณ์
}
