#include <stdio.h>

int main() {
    char firstName[50];
    char lastName[50];

    // รับข้อมูลจากผู้ใช้
    printf("First Name: ");
    scanf("%s", firstName);

    printf("Last Name: ");
    scanf("%s", lastName);

    // แสดงผลตามรูปแบบที่ต้องการ
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", firstName, lastName);

    return 0;
}
