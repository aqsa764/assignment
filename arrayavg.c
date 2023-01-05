#include<stdio.h>
main()
{
	int  i,num,sum=0;
	float avg;
	
	printf("please enter 10 number\n ");
	
	
	for(i=1;i<=10;i++)
	{
		printf("number %d= ",i);
		scanf("%d",&num);
		sum=sum+num;
	}
	avg=sum/10;
	
	printf("\nthe sum of 10 number= %d",sum);
	printf("\n the average of 10 number =%.2f\n",avg);
}
