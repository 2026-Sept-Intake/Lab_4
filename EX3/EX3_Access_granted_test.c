#include <stdio.h>
int main(void)
{
	int fm; // fm = fingerprint match
	int rm; // rm = retinal match
	int ac; // ac = access card
	printf("enter the fingerprint_match\n");
	scanf("%d",&fm);
	printf("enter the retinal_match\n");
	scanf("%d",&rm);
	printf("enter the access_card\n");
	scanf("%d",&ac);
	if((fm==1&&rm==1&&ac==0||fm==1&&rm==0&&ac==1||fm==0&&rm==1&&ac==1||fm==1&&rm==1&&ac==1))
	{ 
	printf("access granted\n");
        } 
       	else 
	{
        printf("access not granted\n");
	}
        return 0;
}

      
