#include <stdio.h>

int main(void)
{
	int s1, s2, s3, ttl;
	float avg;

	printf("Enter marks for,\n section 01: ");
	scanf("%d", &s1);
	printf(" section 02: ");
	scanf("%d", &s2);
	printf(" section 03: ");
	scanf("%d", &s3);

	ttl = s1+s2+s3;
	avg = (ttl/3.0);

	if((s1 >= 70 && s2 >= 70) && (s3 >= 70 && avg >= 75))
	{
		printf("Pass\n");
		return 0;
	}

	printf("Fail\n");
	return 0;
}
