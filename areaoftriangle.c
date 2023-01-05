#include<stdio.h>
int main()
{
	float  base,height,area;
	
	printf("\nenter the base of triangle : ");
	scanf("%f",&base);
	
	printf("\nenter the height of triangle : ");
	scanf("%f",&height);
	
	area=(base*height)/2;
	
	printf("\narea of triangle =%.2f",area);
	return 0;
}
