#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main() {
  int i;
  char n[20];
  char swap[20];
  int  t ;
  

  printf("Enter Word :");
  scanf("%s", n);
  
  printf("\n--------------\n");
  printf("%2s",n);
  printf("\n--------------\n");
  int num = strlen(n);

  for (i = num; i >= 0; i--) {
    n[i] = tolower(n[i]);
    swap[num-i-1] = n[i]; 
  }
  
  printf("%s \n",swap);
  t = strcmp(n,swap);
  if(t == 0){
    printf("pass");
  }
  else{
    printf("no pass");
  }
  
  return 0;
}