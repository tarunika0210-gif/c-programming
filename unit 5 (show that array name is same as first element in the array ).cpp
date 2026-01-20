//program to show that array name is same as first element in the array 
#include<stdio.h>
main()
{
	int x[4],i;
	for(i=0;i<4;i++)
	{
		printf("Address of x[%d]is %d\n",i,&x[i]);
	}
	printf("Address of array is %ld\n",x);
}
