#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int i,len,flag;
    flag=0;
	
	printf("\nenter string: ");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n %s is palindrome ",str);
		
	}
	else
	{
		printf("\n %s is not palindrome ",str);
	}
	}
