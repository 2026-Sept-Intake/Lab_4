#include <stdio.h>

int main(void)
{
    int age, year, speed, x, y, z, w;
    float water;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Age condition: %d\n", age >= 18 && age <= 21);

    printf("Enter water level: ");
    scanf("%f", &water);
    printf("Water condition: %d\n", water < 1.5 && water > 0.1);

    printf("Enter year: ");
    scanf("%d", &year);
    printf("Divisible by 4: %d\n", year % 4 == 0);

    printf("Enter speed: ");
    scanf("%d", &speed);
    printf("Speed condition: %d\n", speed <= 55);

    printf("Enter x, y and z: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Y condition: %d\n", y > x && y < z);

    printf("Enter w: ");
    scanf("%d", &w);
    printf("W condition: %d\n", w == 6 || w <= 3);

    return 0;
}