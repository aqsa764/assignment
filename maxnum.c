#include<stdio.h>
main()
{
	int a[10],size,i,largest,position;
		
	printf("\nplease enter the size of array \n");
	scanf("%d",&size);
	
	printf("\nplease enter %d element of array :\n ",size);
	scanf("%d",a[i]);
	
	for(i=0;i<size;i++);
	
	largest=a[0];
	{
		if(largest<a[i])
		{
			largest=a[i];
			position=i;
		}
	}
	printf("\n largest element in array=%d",largest);
	printf("\n index position of element =%d",position);
}
