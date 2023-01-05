#include<stdio.h>
main()
{
	int size,i,a[10];
	int even_count=0,odd_count=0;
	
	printf("\nplease enter array : ");
	scanf("%d",&size);
	
	printf("\nplease enter the array element : ");
	scanf("%d",&a[i]);
	
		for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			even_count++;
		}
		else
		{
			odd_count++;
		}
		
	}
	printf("\ntotal number of even number in this array=%d",even_count);
	printf("\ntotal number of odd number inthis array = %d",odd_count);
}
