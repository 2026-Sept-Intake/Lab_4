#include<stdio.h>

int main(void)
{
	int f,r,a; //fingerprint, retina, access card
	printf("Use 1 for yes and 0 for no\n");
	printf("Did the fingerprint match? ");
	scanf("%d", &f);
	printf("Did the retinal scan match? ");
	scanf("%d", &r);
	printf("Was the access card valid? ");
	scanf("%d", &a);

	if((f&&r||f&&a||r&&a||f&&r&&a)==1)
	{
		printf("Access Granted\n");
	}
	else
	{
		printf("Access Denied\n");
	}

	return 0;
}


