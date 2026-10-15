#include<stdio.h>
int main(void)
{
        int fingerprint_match;
	int retinal_match;
	int access_card_valid;

	printf("please enter 1 if finger print matches and 0 if not :");
	scanf("%d",&fingerprint_match);
	printf("please enter 1 if retina scan  matches and 0 if not :");
        scanf("%d",&retinal_match);
        printf("please enter 1 if access card is valid and 0 if not :");
 	scanf("%d",&access_card_valid);

	if( (fingerprint_match==1 && retinal_match==1) || (fingerprint_match==1 && access_card_valid==1) || (retinal_match==1 && access_card_valid==1))
	{
		printf("Access granted");
        }
	else
	{
		printf("Access denied");
	}
	return 0;
}

