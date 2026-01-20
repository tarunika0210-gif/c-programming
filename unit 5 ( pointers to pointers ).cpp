//programon pointers to pointers
#include<stdio.h>
main()
{
	int x=2;
	int *p,**pp;
	p=&x;
	pp=&p;
	printf("The address of x is %d\n",&x);
	printf("The value of x is %d\n",x);
	printf("The address of x is %d\n",p);
	printf("The value of x is %d\n",*p);
	printf("The address of p is %ld\n",pp);
	printf("The value of p(address of x)is %ld\n",*pp);
	printf("The value of x is %d\n",**pp);
}
