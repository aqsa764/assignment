#include<stdio.h>
main()
{
	int a[50],i,j,temp,size;
	
	printf("\nplease enter the number of element : ");
	scanf("%d",&size);
	
	printf("\nplease enter %d element of array\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n***array of element in ascending order are: ***\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
		
	}
}
