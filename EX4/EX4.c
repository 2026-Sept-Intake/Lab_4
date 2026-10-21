#include<stdio.h>
int main(void)
{
	int section1, section2, section3;
        float average;
	printf("Enter section 1 score: ");
	scanf("%d", &section1);
	printf("Enter section 2 score: ");
	scanf("%d", &section2);
	printf("Enter section 3 score: ");
	scanf("%d", &section3);
              
	 average =  (section1+section2+section3)/3;

		if(section1 >= 70 && section2 >=70 && section3 >=70 && average >=75)
		{
			printf("Pass\n");
		}
		else
		{
			printf("Fail\n");
		}
	return 0;
}

