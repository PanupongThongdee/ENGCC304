# include <stdio.h>
int N ;
int main()

{
  printf("Enter Number_please\n");
  scanf("%d",&N);

  for(int i = N; i>0; i--) {
    if(i%2 == 1){
        printf(" \t%d เลขคี่\n",i);
      }
      
        else {
      printf("\n%d เลขคู่\t",i);
      }
    
  }
       return 0;
}
 
