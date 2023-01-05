#include<stdio.h>
#include<string.h>
main()
{
	char str[100],revstr[100];
	int i,j,len;
	
	printf("\nenter text : ");
	gets(str);
	
	j=0;
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		revstr[j++]=str[i];
	}
	revstr[i]='\0';
	
	printf("\n and the result is :%s\n",revstr);
}
