#include <stdio.h>

int main() {
    int i ;
    int num[100];
    int n;
    int j ;
    int check;

printf("Enter N : ");
scanf("%d",&n);
printf("\n--------------\n");
for(i = 0 ; i < n ; i++){
printf("Enter value [%d] :",i);
scanf("%d",&num[i]);
}
printf("---------------------:\n");
  for(i = n-1; i >=0 ; i--){ //สลับเลขจากมากไปน้อย
   // printf("%d",i);
   //  printf(" %d \n", num[i]);
    check = 1;

    for(j = 2; j<=num[i]/2;j++){ //เช็คเลขที่หารลงตัว
      // printf("%3d",j);
      // printf("%3d \n",num[i]);
       if(num[i]%j==1){
         check = 0;
         printf("%3s","#");
         break;
       }
    }
     if(check == 1){
       printf("%3d",num[i]);
     }
    
   }

    return 0;
}