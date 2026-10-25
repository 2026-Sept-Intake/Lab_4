#include <stdio.h>
int main (){
      int fingerprint_match,retinal_match,access_card_valid;
      
      printf("Fingerprint matc(1/10):");
      scanf("%d",&fingerprint_match);

      printf("Retinal match(1/10):");
      scanf("%d",&retinal_match);
      
      printf("Access card valid(1/10):");
      scanf("%d",&access_card_valid); 

    if((fingerprint_match && retinal_match)||(fingerprint_match && retinal_match)||(retinal_match && access_card_valid))
       printf("Access Granted\n");
    else
	printf("Access Denied\n");
   return 0;
}   
