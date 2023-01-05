#include<stdio.h>
main()
{
	int n,reverse=0,rem;
	
	printf("enter number :");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n/=10;
		
	}
	printf("reverse number is: %d",reverse);
}
