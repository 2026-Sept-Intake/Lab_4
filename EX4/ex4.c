#include <stdio.h>
int main (void){
	
	int section1 ;
	int section2 ;
	int section3 ;
	
	float average =( section1+ section2+ section3 )/3;

	printf ("Enter a section1 marks :");
	scanf ("%d", &section1);

	printf ("Enetr a section2 marks :");
	scanf ("%d", &section2);

	printf ("Enetr a section3 marks :");
	sacnf ("%d", &section3);

	if( section1 >= 70 && section2 >= 70 && section3 >= 70 && average >=75){
		printf ("Pass");
	}
	else{
		printf ("Fail");
	}
	return 0;
}
