//program of AUTO storage class
#include<stdio.h>
void counter();
main()
{
	counter();
	counter();
	counter();
}
void counter()
{
	auto int x=0;
	x++;
	printf("%d\n",x);
}
