#include<stdio.h>
int main(void)
{
	//define the variables
	float section1;
	float section2;
	float section3;
	float sum;
	float avg;
       
	// take the marks scored by the user
	printf("please enter the marks for section 1 :");
	scanf("%f",&section1);
        
        printf("please enter the marks for section 2 :");
	scanf("%f",&section2);

	printf("please enter the marks for section 3 :");
	scanf("%f",&section3);

	sum=section1+section2+section3;
	avg=sum/3;

	//Make a condtion to check if pass or fail
	if( section1>=70 && section2>=70 && section3>=70 && avg>=75)
	{
		printf("You've Passed!\n");

	}
	else
	{
		printf("You've Failed!\n");
	}
	return 0;
}
 
