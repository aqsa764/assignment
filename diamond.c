#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("enter value : ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		for(k=1;k<n-i;k++)
		{
			printf(" ");
	}
	for(j=1;j<=i;j++)
	{
		printf(" *");
	}
	printf("\n");
}
  
  for(i=n-1;i>0;i--)
  {
  	for(k=1;k<=n-i;k++)
  	{
  		printf(" ");
	  }
	  for(j=1;j<=i;j++)
  {
  	printf(" *");
  }
  printf("\n");
  }
}
