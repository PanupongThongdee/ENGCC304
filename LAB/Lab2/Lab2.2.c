#include <stdbool.h>
#include <stdio.h>

bool condition = true;

void Show_menu_drink() {
  printf("\n--- ประเภทเครื่องดื่ม ---\n");
  printf("1. โค้กกระป๋องละ 10 บาท\n");
  printf("2. น้ำเขียวกระป๋องละ 12 บาท\n");
  printf("3. อเมริกาโน่ 30 บาท\n");
  printf("4. ลาเต้หวานเจี๊ยบ 35 บาท\n");
  printf("เลือกสินค้าของคุณ  : ");
}

void Show_menu_snack() {
  printf("\n--- ประเภทขนม ---\n");
  printf("1. เมล็ดทานตะวัน 13 บาท\n");
  printf("2. ถั่วแปบ 20 บาท\n");
  printf("3. จิ้นส้มหมก 15 บาท\n");
  printf("เลือกสินค้าของคุณ : ");
}

int main() {
  int choice_menu;
  int drink_choice, snack_choice;
  int add1 = 0, add2 = 0, add3 = 0, add4 = 0;
  int add5 = 0, add6 = 0, add7 = 0;
  int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
  int sum5 = 0, sum6 = 0, sum7 = 0;
  int money = 0;

  // Stock
  int stock_coke = 20, stock_green = 20, stock_americano = 20, stock_latte = 20;
  int stock_seed = 20, stock_taopap = 20, stock_jinsom = 20;

  // ราคาสินค้า
  int price_obj1 = 10, price_obj2 = 12, price_obj3 = 30, price_obj4 = 35;
  int price_snack1 = 13, price_snack2 = 20, price_snack3 = 15;

  // ยอดเงินรวม
  int total = 0;

  char Y_N;

  // เงินคงเหลือในตู้
  int cash1000 = 20, cash500 = 20, cash100 = 20, cash50 = 20, cash20 = 20;
  int coin10 = 50, coin5 = 50, coin1 = 100;

  while (condition) {
    printf("\n=============================\n");
    printf("1. เครื่องดื่ม\n");
    printf("2. ของทานเล่น\n");
    printf("3. ยกเลิกและสรุปยอด\n");
    printf("=============================\n");
    printf("เลือกหมายเลขเมนู: ");
    scanf("%d", &choice_menu);

    if (choice_menu == 0) {
      while (getchar() != '\n')
        ;
    }

    if (choice_menu == 1) {
      bool drink_condition = true;
      while (drink_condition) {
        Show_menu_drink();
        scanf("%d", &drink_choice);
        int qty;
        switch (drink_choice) {
        case 1:
          printf("จำนวน โค้ก (คงเหลือ %d): ", stock_coke);
          scanf("%d", &qty);
          if (qty > stock_coke)
            printf("สินค้าคงเหลือไม่พอ!\n");
          else {
            sum1 += qty;
            stock_coke -= qty;
            total += qty * price_obj1;
          }
          break;
        case 2:
          printf("จำนวน น้ำเขียว (คงเหลือ %d): ", stock_green);
          scanf("%d", &qty);
          if (qty > stock_green)
            printf("สินค้าคงเหลือไม่พอ!\n");
          else {
            sum2 += qty;
            stock_green -= qty;
            total += qty * price_obj2;
          }
          break;
        case 3:
          printf("จำนวน อเมริกาโน่ (คงเหลือ %d): ", stock_americano);
          scanf("%d", &qty);
          if (qty > stock_americano)
            printf("สินค้าคงเหลือไม่พอ!\n");
          else {
            sum3 += qty;
            stock_americano -= qty;
            total += qty * price_obj3;
          }
          break;
        case 4:
          printf("จำนวน ลาเต้ (คงเหลือ %d): ", stock_latte);
          scanf("%d", &qty);
          if (qty > stock_latte)
            printf("สินค้าคงเหลือไม่พอ!\n");
          else {
            sum4 += qty;
            stock_latte -= qty;
            total += qty * price_obj4;
          }
          break;
        default:
          printf("เลือก 1-4 เท่านั้น\n");
          continue;
        }
        printf("ต้องการสั่งเครื่องดื่มเพิ่มไหม (Y/N): ");
        scanf(" %c", &Y_N);
        if (Y_N == 'N' || Y_N == 'n')
          drink_condition = false;
      }
    }

    else if (choice_menu == 2) {
      bool snack_condition = true;
      while (snack_condition) {
        Show_menu_snack();
        scanf("%d", &snack_choice);
        int qty;
        switch (snack_choice) {
        case 1:
          printf("จำนวน เมล็ดทานตะวัน (คงเหลือ %d): ", stock_seed);
          scanf("%d", &qty);
          if (qty > stock_seed)
            printf("สินค้าคงเหลือไม่พอ!\n");
          else {
            sum5 += qty;
            stock_seed -= qty;
            total += qty * price_snack1;
          }
          break;
        case 2:
          printf("จำนวน ถั่วแปบ (คงเหลือ %d): ", stock_taopap);
          scanf("%d", &qty);
          if (qty > stock_taopap)
            printf("สินค้าคงเหลือไม่พอ!\n");
          else {
            sum6 += qty;
            stock_taopap -= qty;
            total += qty * price_snack2;
          }
          break;
        case 3:
          printf("จำนวน จิ้นส้มหมก (คงเหลือ %d): ", stock_jinsom);
          scanf("%d", &qty);
          if (qty > stock_jinsom)
            printf("สินค้าคงเหลือไม่พอ!\n");
          else {
            sum7 += qty;
            stock_jinsom -= qty;
            total += qty * price_snack3;
          }
          break;
        default:
          printf("เลือก 1-3 เท่านั้น\n");
          continue;
        }
        printf("ต้องการสั่งขนมเพิ่มไหม (Y/N): ");
        scanf(" %c", &Y_N);
        if (Y_N == 'N' || Y_N == 'n')
          snack_condition = false;
      }
    }

    else if (choice_menu == 3)
      condition = false;
    else
      printf("กรอก 1,2 หรือ 3 เท่านั้น\n");
  }

  // สรุปรายการ
  int total_num = sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7;
  printf("\n===== สรุปรายการ =====\n");
  printf("โค้ก: %d ชิ้น ราคา %d บาท\n", sum1, sum1 * price_obj1);
  printf("น้ำเขียว: %d ชิ้น ราคา %d บาท\n", sum2, sum2 * price_obj2);
  printf("อเมริกาโน่: %d ชิ้น ราคา %d บาท\n", sum3, sum3 * price_obj3);
  printf("ลาเต้: %d ชิ้น ราคา %d บาท\n", sum4, sum4 * price_obj4);
  printf("เมล็ดทานตะวัน: %d ชิ้น ราคา %d บาท\n", sum5, sum5 * price_snack1);
  printf("ถั่วแปบ: %d ชิ้น ราคา %d บาท\n", sum6, sum6 * price_snack2);
  printf("จิ้นส้มหมก: %d ชิ้น ราคา %d บาท\n", sum7, sum7 * price_snack3);
  printf("รวมทั้งหมด: %d บาท จำนวนสินค้าทั้งหมด: %d ชิ้น\n", total, total_num);

  // ระบบรับเงิน + ทอนเงิน
  int remaining = total;
  while (remaining > 0) {
    printf("กรุณาป้อนเงิน: ");
    scanf("%d", &money);
    remaining -= money;
    if (remaining > 0) {
      printf("เงินยังไม่พอ! ยอดคงเหลือ: %d บาท\n", remaining);
    } else {
      int change = -remaining;
      printf("รับเงินครบ! ทอนเงิน: %d บาท\n", change);

      // แบ่งทอนเงินเป็นธนบัตร/เหรียญ
      int c1000, c500, c100, c50, c20, c10, c5, c1;
      c1000 = change / 1000;
      change %= 1000;
      c500 = change / 500;
      change %= 500;
      c100 = change / 100;
      change %= 100;
      c50 = change / 50;
      change %= 50;
      c20 = change / 20;
      change %= 20;
      c10 = change / 10;
      change %= 10;
      c5 = change / 5;
      change %= 5;
      c1 = change;
      printf("\nทอน: %d ธนบัตร/เหรียญ: 1000=%d, 500=%d, 100=%d, 50=%d, 20=%d, "
             "10=%d, 5=%d, 1=%d\n",
             total, c1000, c500, c100, c50, c20, c10, c5, c1);

      printf("ยอดเงินคงเหลือในตู้\n");
        printf("ใบ แบงค์ 1000 บาท %d",cash1000 - c1000); 
        printf("ใบ แบงค์ 500 บาท %d",cash500 - c500); 
        printf("ใบ แบงค์ 100 บาท %d",cash100 - c100);
        printf("ใบ แบงค์ 50 บาท %d",cash50 - c50);
        printf("ใบ แบงค์ 20 บาท %d",cash20 - c20);
        printf("เหรียญ 10 บาท %d",coin10 - c10);
        printf("เหรียญ 5 บาท %d",coin5 - c5);
        printf("เหรียญ 1 บาท %d",coin1 - c1);

    }
  }

  printf("\n--- ขอบคุณที่ใช้บริการ ---\n");
  return 0;
}
