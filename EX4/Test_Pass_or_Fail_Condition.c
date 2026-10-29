#include <stdio.h>
int main (void)

{
int s1_mark,s2_mark,s3_mark;
float avg;

printf("Enter First Section Mark: ");
scanf("%d",&s1_mark);

printf("Enter Second Section Mark: ");
scanf("%d",&s2_mark);

printf("Enter Third Section Mark: ");
scanf("%d",&s3_mark);

avg=(s1_mark+s2_mark+s3_mark)/3.0;

if ((s1_mark>=70) && (s2_mark>=70) && (s3_mark>=70) && (avg>=75))
{
printf("PASS");
}
else
{
printf("FAIL!!!");
}
return 0;
}
