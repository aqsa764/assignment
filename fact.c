#include<stdio.h>
main()
{
	int i,n,fact=1;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("\nfactorial of %d is : %d",n,fact);
}
