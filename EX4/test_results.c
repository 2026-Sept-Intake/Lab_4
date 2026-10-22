#include<stdio.h>
int main (void)
{
	int mark1,mark2,mark3;
	float avg;

	printf("Enter your marks for section1 :");
	scanf("%d",&mark1);
	printf("Enter your marks for section2 :");
	scanf("%d",&mark2);
	printf("Enter your marks fot section3 :");
	scanf("%d",&mark3);

	avg = (mark1+mark2+mark3)/3;

	if ((mark1>=70)&&(mark2>=70)&&(mark3>=70)&&(avg>=75))
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}

	return 0;

}







	
