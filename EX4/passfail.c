#include <stdio.h>

int main(void){
  int section1 = 0;
  int section2 = 0;
  int section3 = 0;
  float avg = 0;

  printf("Enter the marks for the section1: ");
  scanf("%d",&section1);

  printf("Enter the marks for the section2: ");
  scanf("%d",&section2);

  printf("Enter the marks for the section3: ");
  scanf("%d",&section3);

 avg = (section1 + section2 + section3)/3;


  if(section1 >= 70  && section2 >= 70 && section3 >= 70 && avg >= 75 ){
  printf("Pass! \n");

  }else{
  printf("Fail! \n");

  }

  return 0;
}            
