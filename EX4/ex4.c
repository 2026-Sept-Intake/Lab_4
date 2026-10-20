
#include <stdio.h>

int main(void)
{
    float section1, section2, section3;
    float average;

    printf("Enter section 1 marks: ");
    scanf("%f", &section1);

    printf("Enter section 2 marks: ");
    scanf("%f", &section2);

    printf("Enter section 3 marks: ");
    scanf("%f", &section3);

    average = (section1 + section2 + section3) / 3.0;

    if (section1 >= 70 && section2 >= 70 &&
        section3 >= 70 && average >= 75)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}

