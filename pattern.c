#include<stdio.h>
main()
{
	int i,j,n,k,l;
	printf("enter value: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d",j);
		{
			for(k=1;k<=2*(n-i);k++)
			{
				printf(" ");
			}
			for(l=i;l>=1;l--)
			printf("%d",l);
			{
				printf("*");
			}
		}
		prntf("\n");
	}
}
