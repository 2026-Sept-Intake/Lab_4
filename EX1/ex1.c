#include<stdio.h>
 
int main(void)
{
	int a=6, b=9, c=14, flag=1;

	int n1= a+b || !flag;
	int n2=(a!=7&&flag) ||c>=6;
	int n3=!(b<=12) && a%2==0;
	int n4=!(a>5 || c<a+b);

	printf("1. a+b || !flag = %d\n",n1);
	printf("2. (a!=7&&flag) || c>=6 = %d\n",n2);
	printf("3. !(b<=12) && (a%%2==0) = %d\n",n3);
	printf("4. !(a.5 || c<a+b) = %d\n",n4);

	return 0;

}
