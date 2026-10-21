
#include <stdio.h>

int main(void)
{
    int fingerprint_match = 1;
    int retinal_match = 0;
    int access_card_valid = 1;

    if ((fingerprint_match && retinal_match) ||
        (fingerprint_match && access_card_valid) ||
        (retinal_match && access_card_valid))
    {
        printf("Access Granted");
    }
    else
    {
        printf("Access Denied");
    }

    return 0;
}
