#include <stdio.h>
int main()
{
    float section1, section2, section3, average;

    printf("Enter Score for Section 1:");
    scanf("%f", &section1);

    printf("Enter Score for Section 2:");
    scanf("%f", &section2);

    printf("Enter Score for Section 3:");
    scanf("%f", &section3);

    average = (section1 + section2 + section3) / 3.0;

    if (section1 >= 70.0 && section2 >= 70.0 && section3 >= 70.0 && average >= 75.0)
    {
        printf("Status: Pass (Average: %.2f)\n", average);
    }
    else
    {
        printf("Status: Fail (Average: %.2f)\n", average);
    }

    return 0;
}
