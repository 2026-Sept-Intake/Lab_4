#include<stdio.h>
int main(void)
{
	int section1, section2, section3;
	float average;
	printf("enter the marks of three section");
	scanf("%d %d %d",&section1, &section2, &section3);
	average = (section1 + section2 + section3) / 3.0;
	if (section1 >= 70 && section2 >= 70 && section3 >= 70 && average >= 75)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
