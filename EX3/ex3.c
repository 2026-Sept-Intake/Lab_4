#include <stdio.h>
int main (void){

	int fingerprint_match ;
	int retinal_match;
	int access_card_valid;

	printf("Enter your Fingerprint: ");
	scanf("%d",&fingerprint_match);

	printf ("Scan retinal data : ");
	scanf("%d", &retinal_match);

	printf ("Access card :");
	scanf("%d", &access_card_valid);

	if((fingerprint_match && retinal_match) || (fingerprint_match && access_card_valid) || (retinal_match && access_card_valid)){
		printf ("Access Granetd");
	}
	else{
		printf ("Access Denied");
	}

	return 0;

}

