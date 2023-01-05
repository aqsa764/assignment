#include<stdio.h>
main()
{
	int a[2][5]={45,78,65,42,10} {10,5,30,20,56},sum=0,i,j,average;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
		printf("\n%d %d",i+1,a[i]);
		sum+=a[i];
	}
	printf("\ntotal sum is : %d",sum);
}
