
#include <stdio.h>

int main(void)
{
    int section1 = 70;
    int section2 = 80;
    int section3 = 75;
    float average;

    average = (section1 + section2 + section3) / 3.0;

    if (section1 >= 70 && section2 >= 70 &&
        section3 >= 70 && average >= 75)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
