#include <stdio.h>
int main() 
{
    int fingerprint_match, retinal_match, access_card_valid;

    printf("Enter Fingerprint Match (1 for Match, 0 for no Match):");
    scanf("%d", &fingerprint_match);

    printf("Enter Retinal Scan Match (1 for Match, 0 for no Match):");
    scanf("%d", &retinal_match);

    printf("Enter Access Card Validity (1 for Valid, 0 for Invalid):");
    scanf("%d", &access_card_valid);

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

