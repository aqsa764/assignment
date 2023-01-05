#include<stdio.h>
main()
{
	char str[20];
	int i;
	
	printf("\nenter the sring : ");
	scanf("%s",&str);
	
	for(i=0;i<=str;i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			str[i]=str[i]+32;
			
		}
		else if(str[i]>=97&&str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
	printf("\n convert string (lower/upper)is : %d",str);
}
