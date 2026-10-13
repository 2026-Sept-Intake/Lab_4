#include <stdio.h>
 int main(void){
 int  fingerprint_match, retinal_match, access_card;

 printf("Enter fingerprint_match");
 scanf("%d", &fingerprint_match);

 printf("Enter retinal_match");
 scanf("%d" , &retinal_match);

 printf("Enter access_card");
 scanf("%d" , &access_card);
  
 if((fingerprint_match && retinal_match) || (retinal_match && access_card) || (fingerprint_match && access_card)){

	 printf("Access Granted");
 } else {
	 printf("Access Not Granted");
 } 
   return 0;
 }

