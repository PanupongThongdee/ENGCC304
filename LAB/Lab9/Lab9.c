#include <stdio.h>
int main() {
  int prime; // จำนวนที่รับเข้ามา
  int i;     // loop 1
  int j;     // loop 2
  int check; // ตัวแปรเช็คว่าเป็นจำนวนเฉพาะหรือไม่
  int num[100];
  int n;

  printf("Enter a number:");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter value [%d]:", i);
    scanf("%d", &num[i]);
  }
   printf("\n-----------------------\n");
  
  for (i = n - 1; i >= 0; i--) {
    check = 1;

    for (j = 2; j <= num[i] / 2; j++) {

      if (num[i] % j == 0) {
        check = 0;
        printf("%2s ","#");
        break;
      }
    }
    if (check == 1) {
      printf("%2d ", num[i]);
    }
  }
  return 0;
}
