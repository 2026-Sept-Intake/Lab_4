#include <stdio.h>
int main(void)
{
	int s1; // section 1
	int s2;//section 2
	int s3;//section 3
	float avg;//average score
        printf("Enter the marks for Section 1:");
        scanf("%d",&s1);
	printf("Enter the marks for Section 2:");
	scanf("%d",&s2);
	printf("Enter the marks for Section 3:");
	scanf("%d",&s3);
 
        avg = (s1 + s2 + s3)/3.0;
        printf("Average score is %.2f \n",avg);	

	if(s1 >= 70 && s2 >= 70 && s3 >= 70 && avg >= 75){
	    printf("Student has Passed the test\n");	

	} else {
	    printf("Student has Failed the test\n"); 
	
	}
        
	return 0;
        	

}	

