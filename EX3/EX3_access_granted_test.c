#include<stdio.h>
int main(void)
{
	int finger_print,retinal_data,access_card;
	printf("Input fingerprint\n");
	scanf("%d",&finger_print);
	printf("Input retinaldata\n");
	scanf("%d",&retinal_data);
	printf("Input accesscard\n");
	scanf("%d",&access_card);
	if ((finger_print==1&&retinal_data==1&&access_card==0)||(finger_print==1&&retinal_data==0&&access_card==1)||(finger_print==0&&retinal_data==1&&access_card==1)||(finger_print==1&&retinal_data==1&&access_card==1))
	{printf("access is granted\n");
	}
	else
	{printf("access is denied\n");
	}
	return 0;
}
	
