
## โจทย์
จงเขียนโปรแกรมแสดงคำว่า Hello World จำนวน n บรรทัด (โดย n คือตัวเลขที่รับมาจากผู้ใช้)

## Code
```c++
#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        printf("[%d] Hello world\n", i);

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
