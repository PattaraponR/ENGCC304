#include <stdio.h>

int main() {
    int dayCode, hour;

    if (scanf("%d %d", &dayCode, &hour) != 2) {
        return 1;
    }

    switch (dayCode) {
        case 1: // จันทร์ (Mon)
        case 2: // อังคาร (Tue)
        case 3: // พุธ (Wed)
        case 4: // พฤหัสบดี (Thu)
        case 5: // ศุกร์ (Fri)
            if (hour >= 8 && hour <= 17) {
                printf("System Running (Workday)\n");
            } else {
                printf("System Idle (Off-hours)\n");
            }
            break;
            
        case 6: // เสาร์ (Sat)
        case 7: // อาทิตย์ (Sun)
            printf("Weekend Relax Mode\n");
            break;
            
        default:
            
            printf("Invalid Day Code\n");
            break;
    }

    return 0;
}
