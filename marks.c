#include<stdio.h>
main()
{
	int marks;
	
	printf("enter marks : ");
	scanf("%d",&marks);
	
	if(marks>75)
	{
		if(marks>60)
		{
			printf("distinction");
		}
		else
		{
			printf("first class");
		}
	}
	else
	{
		if(marks>35)
		{
			printf("pass class");
		}
		else
		{
			printf("fail");
		}
	}
}
