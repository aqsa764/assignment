#include<stdio.h>
main()
{
	int i,j,k,n;
	
	printf("enter value: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
		printf("%d",k);
	    }
	printf("\n");
	}
}
