#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0;
    int limit = (int)sqrt(num);
    for (int i = 2; i <= limit; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n;
    printf("Enter N: ");
    if (scanf("%d", &n) != 1) return 1;

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d]: ", i);
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%3d", i);
    }
    printf("\n");

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%3d", arr[i]);
        } else {
            printf("%3s", "#");
        }
    }
    printf("\n");

    return 0;
}
