#include<stdio.h>
int main(void)
{	
	int s1;
	int s2;
	int s3;
	int avg;
	int mark;

	printf("Enter selection1 marks:");
	scanf("%d", &s1);
	printf("Enter selection2 marks:");
	scanf("%d", &s2);
	printf("Enter selection3 marks:");
	scanf("%d", &s3);
        
	mark=s1,s2,s3;
	avg=(s1+s2+s3)/3;

   	if (mark>=70 && avg>=75){
        
	printf("Pass\n");
	}
	else {
	printf("Fail\n");
	}

}	
