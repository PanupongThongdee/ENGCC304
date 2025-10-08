#include <stdio.h>

int number,q ;
int count = 0;



void check(int x);



int main(){
 printf("enter number :");
 scanf("%d",&number);
 check(number);
  
 return 0 ;
}


void check(int x ){
  q = number;
  int cnt , result =0,rem , mul=1;
  
   while(q != 0){
     q=q/10;
      count++;
    }

    cnt = count ;
    q=number;

    while(q != 0){
      rem = q%10;
      while(cnt != 0){
        mul = mul*rem;
        cnt--;
       
      }
      result = result + mul;
      cnt = count;
      q = q/10;
      mul = 1;
    }
  if(result == number){
    printf("pass");
  }
  else{
    printf("no pass");
   }
}