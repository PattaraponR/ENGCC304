
## โจทย์
จงเขียนโปรแกรมแสดงคำว่า Hello World จำนวน n บรรทัด (โดย n คือตัวเลขที่รับมาจากผู้ใช้)

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
    printf("[%d]Hello World \n",i+1);
    }
    return 0;
}
```
## TEST CASE
### Input
```bash
Enter Num : 3
```
### Output
```bash
[1]Hello World
[2]Hello World
[3]Hello World
```
