#include <stdio.h>
int main(void)
{
	int fm;
	int rm;
	int ac;
	printf("Enter '1' if finger print matches or Enter '0' if finger print doesn't matches:");
	scanf("%d",&fm);
        printf("Enter '1' if retinal matches or Enter '0' if retinal doesn't matches:");
        scanf("%d",&rm);
	printf("Enter '1' if access card valid or Enter '0' if access card not valid:");
	scanf("%d",&ac);
	if((fm==1&&rm==1&&ac==0)||(fm==1&&rm==0&&ac==1)||(fm==0&&rm==1&&ac==1)||(fm==1&&rm==1&&ac==1)){
		printf("Access Granted\n");
	}else{
	       printf("Access not Granted\n");
	}
        	
        return 0;




}	
