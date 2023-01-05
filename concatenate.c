#include<stdio.h>
#include<string.h>
main()
{
	char str1[100],str2[100];
	int i,j;
	
	printf("\n enter first string : ");
	gets(str1);
	
	printf("\nentersecond string:");
	gets(str2);
	
	i=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	
	j=0;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	
	printf("\n string after cancatenate=%s",str1);
}
