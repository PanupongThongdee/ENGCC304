// Online C compiler to run C program online
#include <stdio.h>

int x ;
int y ;
int z ;


int main() {
    printf("Enter number for x:");
    scanf("%d", &x);
    printf("-----------------\n");
    printf("Enter number for y:");
    scanf("%d", &y);
    printf("-----------------\n");
    printf("Enter number for z:");
    scanf("%d", &z);
   
   int num ;
   
   num = x + y + z ;
   
   printf("Answer = %d",num);
   
   
    return 0;
}