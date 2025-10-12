#include <stdio.h>

int main() {
    int N, i;

    printf("Enter value:\n");
    scanf("%d", &N);

    printf("Series: ");
    if (N % 2 == 1) {
        for (i = 1; i <= N; i++) {
            if (i % 2 == 1) {
                printf("%d ", i);
            }
        }
    }

    else {
        for (i = N; i >= 0; i--) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    }

    printf("\n"); 
    return 0;
}