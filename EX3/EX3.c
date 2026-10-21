#include<stdio.h>
int main (void)
{	
	int f_p;
	int r_s;
	int a_c;
	int count;

	printf("Enter fingerprint:");
	scanf("%d",&f_p);
	printf("Retinal scan:");
	scanf("%d",&r_s);
	printf("Access card:");
	scanf("%d",&a_c);
	 
	count=f_p+r_s+a_c;


	if (count>=2) {
		printf("Access Granted\n");
	}
	else 
	{ printf("Access Denied\n");
	}
return 0;

}


