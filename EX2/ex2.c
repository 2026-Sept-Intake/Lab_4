#include<stdio.h>

int main()
{
	int age=20;
	double water=1.2;
	int year=2024;
	int speed=60;
	int x=2, y=5, z=9;
	int w=4;

	int t1 = age>=18 && age<=21;
	int t2 =water<1.5 && water>0.1;
	int t3 =year%4==0;
	int t4 =!(speed>55);
	int t5 =y>x && y<z;
	int t6 =w==6 || !(w>3);

         printf("1.age=%d  result=%d\n", age, t1);
         printf("2.water=%.1f  result=%d\n", water, t2);
          printf("3.year=%d  result=%d\n", year, t3);
           printf("4.speed=%d  result=%d\n", speed, t4);
         printf("5.x=%d y=%d z=%d  result=%d\n", x, y, z, t5);
             printf("6.w=%d  result=%d\n", w, t6);


	return 0;
}
