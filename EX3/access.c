#include <stdio.h>

int main(void)
{
	float fingerprint_match,retinal_match,access_card_valid;

	printf("Keep the Fingerprint:");
	scanf("%f", &fingerprint_match);

	printf("Show the face:");
	scanf("%f", &retinal_match);

	printf("Tap the card:");
	scanf("%f", &access_card_valid);

	if(fingerprint_match==1&&retinal_match==1&&access_card_valid==0)
	 printf("Access Granted");

	else if(fingerprint_match==0&&retinal_match==1&&access_card_valid==1)
	 printf("Access Granted");

	else if(fingerprint_match==1&&retinal_match==0&&access_card_valid==1)
	 printf("Access Granted");

	else if(fingerprint_match==1&&retinal_match==1&&access_card_valid==1)
	 printf("Access Granted");

	else
		printf("Access Not Granted");

		return 0;
	}
