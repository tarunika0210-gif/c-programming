// program on pointers method 2
#include<stdio.h>
main()
{
	int x=2;
	float y=12.4;
	char z='a';
	int *p1=&x;
	float *p2=&y;
	char *p3=&z;
	printf("The value of x is %d\n",*p1);
	printf("The value of y is %f\n",*p2);
	printf("The value of z is %c\n",*p3);
}
