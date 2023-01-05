#include<stdio.h>
main()
{
	char str[100];
	int length=0;
	printf("\n enter string\n");
	gets(str);
	
	while(str[length]!='\0')
	{
		length++;
	}
	printf("\nlength of string=%d",length);
}
