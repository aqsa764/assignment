#include<stdio.h>
main()
{
	int a[10],size,i,search,flag;

	printf("\n enter size:");
	scanf("%d",&size);
	
	printf("\n enter %d element :\n ",size);
	for(i=0;i<size;i++)
	{
	scanf("%d",&a[i]);
    }
	 printf("\n enter search element : ");
	 scanf("%d",&search);
	 flag=0;
	 for(i=0;i<size;i++)
	 {
	 	if(a[i]==search)
	 	{
	 		flag=1;
	 		break;
		 }
	  } 
	  if(flag==1)
	  {
	  	printf("\n we found the search element %d at position %d",search,i+1);
	  }
	  else
	  {
	  	printf("\n sorry!! we haven't found the search element %d",search);
	  }
	 
}
