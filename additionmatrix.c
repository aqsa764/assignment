#include<stdio.h>
main()
{
	int i, j,n,m;
	int a[n][m],b[n][m],c[n][m];
	
	printf("enter value : ");
	scanf("%d %d",&n,&m);
	
	printf("\nenter first matrix\n");
	
	for(i=1;i<+n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&b[i][j]);
		}
		{
			printf("\nresultant matrix\n");
		}
		for(i=1;i<=n;i++)
		{
				for(j=1;j<=m;j++)
				c[i][j]=a[i][j]+b[i][j];
				
				for(i=1;i<+n;i++)
				{
						for(j=1;j<=m;j++)
						printf("%d",c[i][j]);
						
				}
				
					
		}
	}
	printf("\n");
}
