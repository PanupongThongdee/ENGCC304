#include <stdio.h>
int main() {
  int prime; // จำนวนที่รับเข้ามา
  int i; // loop 1
  int j; // loop 2
  int check; // ตัวแปรเช็คว่าเป็นจำนวนเฉพาะหรือไม่

  printf("Enter a number:\n");
  scanf("%d", &prime); // รับค่าจำนวนเข้ามา

  for (i = prime; i > 1; i--) { // i loop
    check = 1; // ให้ check = 1 ก่อนเข้า j loop

    for (j = 2; j <= i / 2; j++) { // j loop

      if (i % j == 0) { // ถ้า i หาร j ลงตัว ให้ break ออกจาก j loop
        check = 0;
        break;
      }// end if
    }// end j loop

    if (check == 1) { // i loop
      printf("%d ,\t", i); // ถ้า check = 1 ให้ print i
    }// end if
  }// end i loop
  return 0;
}// end main
