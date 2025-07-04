#include <stdio.h> // สำหรับ printf, scanf
#include <math.h>  // สำหรับ sqrt

// ฟังก์ชันสำหรับตรวจสอบว่าจำนวนเต็มเป็นจำนวนเฉพาะหรือไม่
int isPrime(int num) {
    // จำนวนน้อยกว่า 2 ไม่ใช่จำนวนเฉพาะ
    if (num < 2) {
        return 0;
    }
    // ตรวจสอบตัวหารจาก 2 ไปจนถึงรากที่สองของ num
    // หาก num หารด้วย i ลงตัว แสดงว่าไม่ใช่จำนวนเฉพาะ
    int limit = (int)sqrt(num);
    for (int i = 2; i <= limit; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    // ถ้าไม่พบตัวหารใดๆ แสดงว่าเป็นจำนวนเฉพาะ
    return 1;
}

int main(void) {
    int n;

    // รับค่า N (ขนาดของอาเรย์) จากผู้ใช้
    printf("Enter N: ");
    if (scanf("%d", &n) != 1 || n <= 0) { // เพิ่มการตรวจสอบ n <= 0
        fprintf(stderr, "Invalid input for N. Please enter a positive integer.\n");
        return 1; // คืนค่า 1 เพื่อระบุว่าเกิดข้อผิดพลาด
    }

    // สร้างอาเรย์ขนาด n
    int arr[n];

    // รับค่าแต่ละองค์ประกอบของอาเรย์จากผู้ใช้
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d]: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input for value[%d]. Please enter an integer.\n", i);
            return 1; // คืนค่า 1 เพื่อระบุว่าเกิดข้อผิดพลาด
        }
    }

    // --- แสดงผลลัพธ์ ---

    // พิมพ์ดัชนีของอาเรย์
    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%3d", i);
    }
    printf("\n");

    // พิมพ์ค่าในอาเรย์ โดยตรวจสอบว่าเป็นจำนวนเฉพาะหรือไม่
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%3d", arr[i]); // ถ้าเป็นจำนวนเฉพาะ ให้พิมพ์ค่า
        } else {
            printf("%3s", "#"); // ถ้าไม่ใช่จำนวนเฉพาะ ให้พิมพ์ '#'
        }
    }
    printf("\n");

    return 0; // คืนค่า 0 เพื่อระบุว่าโปรแกรมทำงานเสร็จสมบูรณ์โดยไม่มีข้อผิดพลาด
}