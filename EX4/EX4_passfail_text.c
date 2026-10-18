#include <stdio.h>
int main (void)
{
	int section1,section2,section3;
	float average;
	printf("enter section 1 score");
	scanf("%d", &section1);
	printf("enter the section 2 score");
	scanf("%d", &section2);
	printf("enter the section 3 score");
	scanf("%d", &section3);

	average =(section1 + section2 + section3 )/ 3.0;
	
	if(section1>=70&&section2>=70&&section3>=70&&average>=75)
	{
	printf("pass\n");
	}
	else
	{
        printf("fail\n");
	}
	return 0;
}
