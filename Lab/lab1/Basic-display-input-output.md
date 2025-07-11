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
    scanf("%d", &Age); //เติม & เพื่อให้เก็บค่าที่พิมพ์ไว้ที่ ตำแหน่งของตัวแปร Age

    printf("- - - - - -\n"); // แก้จาก print เป็น printf
    printf("Hello %s \n", Name); //เติมตัวแปร Name ในช่องว่าง
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
![Lab1 Input](https://github.com/user-attachments/assets/fb5c92ae-2f4a-4df4-bad0-e9364aae0439)

### Output
```bash
- - - - - -
Hello Pattarapon
Age = 19
```
![Lab1 Output](https://github.com/user-attachments/assets/1e0827c6-0359-4ae2-a497-95e4bf6977a3)
