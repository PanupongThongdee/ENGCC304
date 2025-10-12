#include <stdio.h>

int main() {
    int arr[] = {15, 7, 25, 3, 73, 32, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, temp;
    int pos32 = -1; // เก็บตำแหน่งของ 32 หลังเรียง

    // แสดงค่าเดิม
    printf("Old Series : ");
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n-1) printf(", ");
    }
    printf("\n");

    // Bubble sort (เรียงจากน้อยไปมาก)
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // แสดงค่าใหม่
    printf("New Series : ");
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n-1) printf(", ");
    }
    printf("\n");

    // หาตำแหน่งของ 32
    for(i = 0; i < n; i++) {
        if(arr[i] == 32) {
            pos32 = i;
            break;
        }
    }

    printf("Pos of 32 : %d\n", pos32);

    return 0;
}