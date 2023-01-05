#include<stdio.h>
main()
{
	int no,square,cube;
	
	printf(" enter number : ");
	scanf("%d",&no);
	
	square=no*no;
	cube=no*no*no;
	{
		printf("square of %d is %d\n ",no,square);
		printf("cube of %d is %d\n",no,cube);
	}
}
