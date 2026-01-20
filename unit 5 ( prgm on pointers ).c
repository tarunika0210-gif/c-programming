//program on pointers
#include<stdio.h>
main()
{
	int x=2;
	int *p;
	p=&x;
	printf("The address of x is %d\n",&x);
	printf("The address of x is %d\n",p);
	printf("The value of x is %d\n",x);
	printf("The value of x is %d\n",*p);
	
}
