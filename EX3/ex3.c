#include <stdio.h>
int main()
{
	int fingerprint_match=0;
	int retinal_match=0;
	int access_card_valid=0;

	printf("Enter fingerprint_match(0 or 1):");
	scanf("%d",&fingerprint_match);


        printf("Enter retinal_match(0 or 1):");
        scanf("%d",&retinal_match);

	printf("Enter access_card_valid(0 or 1):");
	scanf("%d",&access_card_valid);

	if ((fingerprint_match && retinal_match) || (fingerprint_match && access_card_valid) || (retinal_match && access_card_valid))
	{
		printf("Access Granted\n");
	}
	else
	{
		printf("Access Denied\n");
	}

	return 0;


        	
}
