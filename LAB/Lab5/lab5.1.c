// Online C compiler to run C program online
#include <stdio.h>


int main() {
    
char ID [10]  ;
int time_working = 0 ;
int Salary = 0;
int sum = 0 ;
    
printf("Input the Employees ID (Max. 10 chars :)\n");
scanf("%s",&ID);
printf("Input the working hrs :\n");
scanf("%d",&time_working);
printf("Salary amount/hr :\n");
scanf("%d",&Salary);


sum = time_working * Salary ;

printf("\n--------------------\n");
printf("Expected Output:\n");
printf("Employees ID = %s \n",ID);
printf("Salary = U$ %d.00 \n",sum);


    return 0;
}