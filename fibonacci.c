#include<stdio.h>
main()
{
	int i,n,t1=0,t2=1,t3;
	
	t3=t1+t2;
	
	printf("enter the number :");
	scanf("%d",&n);
	
	printf("fibnocci series : %d %d",t1,t2);
	
	for(i=3;i<=n;i++)
	{
		printf("%d",t3);
		t2=t1;
		t2=t3;
		t3=t1+t2;
	}
}
