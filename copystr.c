#include<stdio.h>
#include<string.h>
main()
{
	char str[100],copystr[100];
	int i;
	
	printf("\nenter string : ");
	gets(str);
	 
	for(i=0;str[i]!='\0';i++)
	{
		copystr[i]=str[i];
	}
	copystr[i]='\0';
	
	printf("\n string that coped into copystr=%s",copystr);
	printf("\ntotal  nummber that copied=%d\n",i);
}
