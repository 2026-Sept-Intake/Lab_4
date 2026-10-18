#include<stdio.h>
int main(void)
{
	int section1 , section2 , section3 , avg ;
	printf("Enter the section1 test marks percentage: ");
	scanf("%d",&section1);
	printf("Enter the section2 test marks percentage: ");
	scanf("%d",&section2);
	printf("Enter the section3 test marks percentage: ");
	scanf("%d",&section3);
	avg = (section1 + section2 + section3) / (3);
	if (avg >= 75 && section1 >= 70 && section2 >= 70 && section3 >= 70){
		printf("The student is pass the test\n");
	}
	else {
		printf("The student is fail the test\n");
	}
	return 0;
}
