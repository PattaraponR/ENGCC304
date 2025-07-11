## โจทย์
จงแก้ไขโค้ดต่อไปนี้ ให้สามารถรับค่าจากผู้ใช้ เพื่อแสดงผลบนหน้าจอคอมพิวเตอร์ให้ได้ พร้อมทั้งจัดรูปแบบให้ตรงตาม Syntax ที่เรียนมาในห้องเรียน

```c++
#include <stduio.h>

int main() {
    char Name[50] ;
    int  Age = 0 ;
    printf( "Enter your name: " ) 
    scanf( "%s", Name ) ;
    printf( "Enter your age: " ) ;
    scanf( "%d", Age ) ;
    print( "- - - - - -\n" ) ;
    printf( "Hello %s \n", ___ ) ; 
    printf( "Age = %d\n", ___ ) ; 
    
}//end main function
```

## FIX CODE
```c++
#include <stdio.h> //แก้จากคำว่า stduio เป็น stdio

int main() {
    char Name[50];
    int  Age; //ลบ = 0 ออกเพราะเราต้องการเก็บอายุจากผู้ใช้
    
    printf( "Enter your name: "); // ใส่;ปิดคำสั่ง
    scanf("%s", Name );

    printf("Enter your age: ");
    scanf("%d", &Age); //เติม & เพื่อให้เก็บค่าที่พิมพ์ไว้ที่ ตำแหน่งของตัวแปร age

    printf("- - - - - -\n"); // แก้จาก print เป็น printf
    printf("Hello %s \n", Name); //เติมตัวแปร name ในช่องว่าง
    printf("Age = %d \n", Age); //เติมตัวแปร Age ในช่องว่าง

    return 0; //ส่งค่ากลับเพื่อบอกว่าโปรแกรมจบแล้ว
}//end main function
```

## TEST CASE
### Input
```bash
Enter your name: Pattarapon
Enter you age: 19
```
![Screenshot (95)](https://github.com/user-attachments/assets/6406581a-a330-441f-88e7-a4bd19ba5aad)

### Output
```bash
- - - - - -
Hello Pattarapon
Age = 19
```
![Screenshot (96)](https://github.com/user-attachments/assets/26e768ef-a8fd-4f10-aa35-836c5ff484c0)