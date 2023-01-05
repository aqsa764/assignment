#include<stdio.h>
main()
{
	int number,cube;
	
	printf("\nenter value : ");
	scanf("%d",&number);
	
	cube=number * number * number;
	
	
	printf("\ncube of given number %d is =%d",number,cube );
	return 0;
}
