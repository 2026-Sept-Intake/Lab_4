#include <stdio.h>

int main(void){
	int section1, section2, section3;
	float average;

	printf("Enter score for section1");
	scanf("%d" , &section1);

	printf("Enter score for section2");
	scanf("%d" , &section2);

	printf("Enter score for section3");
	scanf("%d" , &section3);


	average = (section1 + section2 + section3) / 3.0;

	if (section1 >= 70 && section2 >= 70 && section3 >= 70 && average >= 75)
	{
		printf("Pass");
	} else {
		printf("Fail");
	}

	printf("average = %f" , average);

	return 0;
}
