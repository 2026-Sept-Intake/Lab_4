#include<stdio.h>
int main (){
	float section1,section2,section3,average;
	printf("Enter section1,secton2,section3 scores: ");
	scanf("%f %f %f", &section1, &section2, &section3);

	average = (section1 + section2 + section3) / 3;
	if(section1 >=70 && section2 >= 70 && section3 >= 70 && average >= 75)
		printf("Pass\n");
	else
		printf("Fail\n");
	return 0;
}
