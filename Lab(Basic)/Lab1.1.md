## โจทย์
จงเขียนโปรแกรมภาษา C เพื่อรับค่าตัวเลขจำนวนเต็ม (Integer) เพียง 1 ค่า คือ N จากผู้ใช้ให้โปรแกรม
ทำการวนซ้ำเพื่อแสดงข้อความ "Hello Loop!" ซ้ำตามจำนวนรอบ N ที่รับมาโดยข้อความ "Hello Loop!" 
จะต้องถูกแสดงผลบรรทัดละหนึ่งครั้ง(เช่น ถ้า N=3 จะแสดงผล 3 บรรทัด)

## Pre-Code
```c++
int main() {
    int N, i;
    
    
    if (scanf("%d", &N) != 1) {
        return 1; 
    }
    
    

    return 0;
}
```

## Code
```c++
#include <stdio.h>
int main(){
    int N,i;
    printf("Enter Num : ");
    if (scanf("%d", &N ) !=1 || N<=0 ){
        printf("Error\n");
        return 1;
    }
    for( i=0; i<N ;i++){
    printf("Hello Loop! \n");
    }
    return 0;
}
```
## TEST CASE
### Input
```bash
Enter Num : 5
```
### Output
```bash
Hello Loop! 
Hello Loop! 
Hello Loop! 
Hello Loop! 
Hello Loop! 
```
