#include <stdio.h>  // แก้ไข: จาก <stduio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) { // แก้ไข: จัดรูปแบบ
        return 0;
    }
    
    for (int i = 2; i <= sqrt(num); i++) { // แก้ไข: จัดรูปแบบ
        if (num % i == 0) { // แก้ไข: จัดรูปแบบ
            return 0;
        }
    }
    
    return 1; // แก้ไข: จัดรูปแบบ
}

int main() {
    int n;
    
    printf("Enter N : ");
    // แก้ไข: เพิ่มการตรวจสอบความผิดพลาดของ scanf และค่า n
    if (scanf("%d", &n) != 1 || n <= 0) { 
        printf("Invalid input for N. Program terminated.\n");
        return 1;
    }
    
    int arr[n]; 
    
    for (int i = 0; i < n; i++) { // แก้ไข: จัดรูปแบบ
        printf("Enter value[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Index:  ");
    for (int i = 0; i < n; i++) { // แก้ไข: จัดรูปแบบ
        printf("%2d ", i); 
    }
    printf("\n");

    printf("Array:  ");
    for (int i = 0; i < n; i++) { // แก้ไข: จัดรูปแบบ
        if (isPrime(arr[i])) { // แก้ไข: จัดรูปแบบ
            printf("%2d ", arr[i]);
        } else {
            printf("%2c ", '#'); // แก้ไข: ใช้ %c แทน %s (Bug Fix)
        }
    }
    printf("\n");
    
    return 0; // แก้ไข: จัดรูปแบบ
}
