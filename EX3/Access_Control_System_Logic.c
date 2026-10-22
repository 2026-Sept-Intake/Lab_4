#include<stdio.h>
int main (void)
{
	int fingerprint_match,retinal_match,access_card_valid;
	
	printf("Enter 1 if your fingerprint is correct and 0 if not: ");
	scanf("%d",&fingerprint_match);

	printf("Enter 1 if your retinal scan is correct and 0 if not: ");
	scanf("%d",&retinal_match);

	printf("Enter 1 if your card is valid and 0 if not: ");
	scanf("%d",&access_card_valid);

	if ((fingerprint_match==1 && retinal_match==1)||(fingerprint_match==1 && access_card_valid==1)||(retinal_match==1 && access_card_valid==1))
	{
		printf("Access Granted");
	}
	else
	{
		printf("Access Denied");
	}

	return 0;
}


