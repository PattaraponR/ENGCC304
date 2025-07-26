## โจทย์
เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด

## FIX CODE
```c++
#include <stdio.h>

int main() {
    // ประกาศตัวแปร
    char emp_id[11]; //ใช้ char เพื่อใส่รหัสพนักงาน [11] คือกำหนดให้เก็บได้สูงสุด 10 ตัวอักษร + 1 ตัวสำหรับ \0 ซึ่งเป็นตัวจบสตริงในภาษา C
    int working_hour, salary_per_hr;     
    float salary;          

    // รับข้อมูลจากผู้ใช้
    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%10s", emp_id);  // รับตัวอักษรสูงสุด 10 ตัว ป้องกันบัฟเฟอร์ล้น

    printf("Input the working hrs: \n");
    scanf("%d", &working_hour);

    printf("Salary amount/hr: \n");
    scanf("%d", &salary_per_hr);

    // คำนวณเงินเดือน
    salary = working_hour * salary_per_hr; // คูณจำนวนชั่วโมงกับค่าจ้างต่อชั่วโมง

    // แสดงผลลัพธ์
    printf("Employees ID = %s\n", emp_id);         
    printf("Salary = U$ %.2f\n", salary); // แสดงเงินเดือน ทศนิยม 2 ตำแหน่ง

    return 0; 
    // จบโปรแกรม
}
```

## TEST CASE 1
### Input
```bash
Input the Employees ID(Max. 10 chars): 
0342
Input the working hrs: 
8
Salary amount/hr: 
15000

```
### Output
```bash
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
```
![Screenshot (103)](https://github.com/user-attachments/assets/a7f816cb-58b1-4405-a639-42260158c43d)

## TEST CASE 2
### Input
```bash
Input the Employees ID(Max. 10 chars): 
0000500349
Input the working hrs: 
11
Salary amount/hr: 
34000

```
### Output
```bash
Expected Output:
Employees ID = 0000500349
Salary = U$ 374000.00
```
![Screenshot (104)](https://github.com/user-attachments/assets/1c2ff982-2623-4c5b-b30e-ff1cae6e01d8)
