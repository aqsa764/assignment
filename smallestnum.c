#include<stdio.h>
main()
{
	int a[10],size,i,smallest,position;
	
	printf("\nenter the size of array  : ");
	scanf("%d",&size);
	
	printf("\nenter %d element of array : ",size);
	for(i=0;i<size;i++)
	{
	scanf("%d",&a[i]);
}

	smallest=a[0];
		for(i=0;i<size;i++)
	{
		if(smallest>a[i])
		{
			smallest=a[i];
			position=i;
		}
	}
	printf("\nsmallest element in array =%d",smallest);
	printf("\nindex position of element =%d",position);
}
