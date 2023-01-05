#include<stdio.h>
 int main()
{
	float  width,length,area;
	
	printf("\nenter the width of rectangle : ");
	scanf("%f",&width);
	
	printf("\nenter the length of rectangle : ");
	scanf("%f",&length);
	
	area=length*width;
	
	printf("\narea of rectangle =%.2f",area);
	return 0;
}
