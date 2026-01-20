//program on void pointers
#include<stdio.h>
main()
{
	void *p;
	int x=2;
	float y=4.3;
	p=&x;
	printf("The value of x is %d\n",(*(int*)p));
	printf("Address of x is %d\n",p);
	p=&y;
	printf("The value of y is %d\n",(*(float*)p));
	printf("Address of y is %d\n",p);
}
