#include <stdio.h>


int main(void){
  int fingerprint_match = 0;
  int retinal_match = 0;
  int access_card_valid = 0;

  printf("is the fingerprint match given type 1 or 0: ");
  scanf("%d",&fingerprint_match);

  printf("is the retinal match given type 1 or 0: ");
  scanf("%d",&retinal_match);

  printf("is the access card valid type 1 or 0: ");
  scanf("%d",&access_card_valid);
	
	
	
	
  if(fingerprint_match && retinal_match || fingerprint_match && access_card_valid || retinal_match && access_card_valid){
    printf("Access Granted!\n");

  }else{
    printf("Access Denied!\n");
 
  }

  return 0;
}
