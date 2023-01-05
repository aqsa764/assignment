#include<stdio.h>
main()
{
	int i,j,row,column,a[10][10],b[10][10];
	int subtraction[10][10];
	
	printf("\nenter num of row and column : ");
	scanf("%d %d",&i,&j);
	printf("\nenter  the first matrix");
	for(row=0;row<i;row++)
	{
		for(column=0;column<j;column++)
		{
			scanf("%d",&a[row][column]);
		}
	}
	printf("enter second matrix :");
	for(row=0;row<i;row++)
	{
		for(column=0;column<j;column++)
		{
		scanf("%d",&b[row][column]);
	}
		for(row=0;row<i;row++)
		{
				for(column=0;column<j;column++)
			subtraction[row][column]=a[row][column]-b[row][column];
		}
	}
	printf("\n after subtraction matrix a from matrix b=a-b \n");
	
}
