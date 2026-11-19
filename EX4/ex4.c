#include <stdio.h>
int main(void)
{
	float section1=70;
	float section2=80;
	float section3=75;
	float average=(section1+section2+section3)/3;

	if
		(section1>=70 && section2>=70 && section3>=70 && average>=75)
			printf("pass\n");
	else
		printf("fail\n");
	return 0;
}
