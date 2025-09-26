#include <stdio.h>

int position;
int experience;
int project;

const int junior = 20000;
const int mid = 35000;
const int senior = 50000;

int main() {

  int exp = 0,Special_Bonus = 0 ;
  
  printf("Position[Junior Programmer(1), Mid-Level Programmer(2), Senior Programmer(3)]:\n");
  scanf("%d", &position);
  printf("------------\n");
  printf("Years of Experience:\n");
  scanf("%d", &experience);
  printf("------------\n");
  printf("Number of Projects Completed this Year:\n");
  scanf("%d", &project);
  printf("------------\n");

  if (position==1){
    printf("Junior Programmer:\n");
    printf("Base Salary: %d THB\n", junior);

    if(experience <1) {
      printf("You don't get a bonus.\n");
    }
    else if (experience <= 3){
        exp = junior*10/100;//อายุงาน 1-3 ปี ได้รับโบนัส 10% ของเงินเดือน
       printf("Experience Bonus: %d THB\n", exp);
    }
    else if ( experience<=5){
        exp = junior*15/100; //อายุงาน 4-5 ปี ได้รับโบนัส 15% ของเงินเดือน
       printf("Experience Bonus: %d THB\n", exp);
    }
    else if(experience >5){
      exp = junior*20/100;//อายุงานมากกว่า 5 ปี ได้รับโบนัส 20% ของเงินเดือน
      printf("Experience Bonus: %d THB\n", exp);

      }
    if(project >5){
     
      Special_Bonus= junior*5/100;
       printf(" Special_Bonus = %d THB\n", Special_Bonus);
    }
    else{
      printf("Special_Bonus = [You don't get a bonus.]\n");
    }

    int num1 = junior + exp + Special_Bonus;
    printf("Net Salary: %d THB\n",num1);

    
    }



    
  else if (position==2){
    printf("Mid-Level Programmer:\n");
      printf("Base Salary: %d THB\n", mid);

      if(experience <1) {
        printf("You don't get a bonus.\n");
      }
      else if (experience <= 3){
         exp = mid*10/100;
         printf("Experience Bonus: %d THB\n", exp);
      }
      else if ( experience<=5){
          exp = mid*15/100;
         printf("Experience Bonus: %d THB\n", exp);
      }
      else if(experience >5){
         exp = mid*20/100;
        printf("Experience Bonus: %d THB\n", exp);

        }
      if(project >5){
        Special_Bonus= mid*5/100;
         printf(" Special_Bonus = %d THB\n", Special_Bonus);
      }
      else{
        printf("Special_Bonus = [You don't get a bonus.]\n");
      }
    int num2 = mid + exp + Special_Bonus;
    printf("Net Salary: %d THB\n",num2);
     

    
      }
    
  else if (position==3){
    printf("Senior Programmer:\n");
      printf("Base Salary: %d THB\n", senior);

      if(experience <1) {
        printf("You don't get a bonus.\n");
      }
      else if (experience <= 3){
         exp =senior*10/100;
         printf("Experience Bonus: %d THB\n", exp);
      }
      else if ( experience<=5){
          exp = senior*15/100;
         printf("Experience Bonus: %d THB\n", exp);
      }
      else if(experience >5){
         exp = senior*20/100;
        printf("Experience Bonus: %d THB\n", exp);

        }
      if(project >5){
        Special_Bonus= senior*5/100;
         printf(" Special_Bonus = %d THB\n", Special_Bonus);
      }
      else{
        printf("Special_Bonus = [You don't get a bonus.]\n");
      }
    int num3 = senior + exp + Special_Bonus;
    printf("Net Salary: %d THB\n",num3);

  }

return 0;
}
