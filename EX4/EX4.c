#include <stdio.h>
int main()
{
	int section1, section2, section3;
	float average;

	printf("Enter marks for section 1: ");
	scanf("%d" , &section1);
	
	printf("Enter marks for section 2: ");
	scanf("%d" , &section2);

	printf("Enter marks for section 3: ");
	scanf("%d" , &section3);

	average = (section1 + section2 + section3) / 3.0;

	if (section1 >= 70 && section2 >= 70 && average >= 75){
		printf("Pass\n");}
	else
	{printf("Fail\n");}
	return 0;
}
