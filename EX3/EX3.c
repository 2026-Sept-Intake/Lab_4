#include<stdio.h>
int main()
{
	int fingerprint, scan, card;

	if
		((fingerprint && scan)||(fingerprint && card)||(scan && card))
		{
			printf("Access granted");
		}


	else
	{
		printf("Access denide");
	}
	return 0;
}
