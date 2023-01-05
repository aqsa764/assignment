#include<stdio.h>
main()
{
	int i,j;
	int a[2][2]={{10,20},{30,70}};
	
	printf("\nprinting the 2D array\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
