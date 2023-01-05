#include<stdio.h>
main()
{
	int n,last,first,sum=0;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	first=n;
	sum=first+last;
	
	printf("sum of first and last digit is : %d",sum);
}
