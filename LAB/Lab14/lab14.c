#include <stdio.h>

int findMax() ;
int findMin() ;

int main() {
    int arr[100];
    int n = 0;
    char ch;

    printf("Enter value:\n");

    // รับค่าจำนวนเต็มจนกว่าจะเจอ Enter
    while (scanf("%d", &arr[n]) == 1) {
        n++;
        ch = getchar();
        if (ch == '\n') break;
    }

    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }

    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int min = findMin(arr, n);
    int max = findMax(arr, n);

    printf("\n\nMin : %d", min);
    printf("\nMax : %d\n", max);

    return 0;
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}