#include <stdio.h>

int main() {
    int N_DAYS, day;
    float initialBudget;
    float remainingBudget;
    float dailySpend;

    // รับค่าเงินเริ่มต้น (initialBudget) และจำนวนวัน (N_DAYS)
    if (scanf("%f %d", &initialBudget, &N_DAYS) != 2) {
        return 1;
    }

    remainingBudget = initialBudget;

    // แสดงหัวข้อรายงานรายวัน
    printf("Day | Spend | Remaining\n");
    printf("--------------------------\n");

    // ทำงานซ้ำตามจำนวน N_DAYS
    for (day = 1; day <= N_DAYS; day++) {
        dailySpend = 0.0;

        // กำหนดค่าใช้จ่ายรายวันตามเงื่อนไขงบประมาณที่เหลือ
        if (remainingBudget >= 500.00) {
            dailySpend = 100.00;
        } else if (remainingBudget >= 100.00) {
            dailySpend = 50.00;
        } else if (remainingBudget > 0.0) {
            dailySpend = 20.00;
        } else {
            dailySpend = 0.0;
        }

        // กฎการหยุด: ถ้าค่าใช้จ่ายที่คำนวณได้มากกว่างบที่เหลือ ให้จ่ายเท่ากับที่เหลือทั้งหมด
        if (dailySpend > remainingBudget) {
            dailySpend = remainingBudget;
        }

        remainingBudget -= dailySpend;
        
        // แสดงรายงานรายวัน
        printf("%d | %.2f | %.2f\n", day, dailySpend, remainingBudget);
    }

    // แสดงสรุปงบประมาณที่เหลือสุดท้าย
    printf("--------------------------\n");
    printf("Final Budget: %.2f\n", remainingBudget);

    return 0;
}
