#include<stdio.h>
#define PI 3.141
int main()
{
	int width,length,rect_area,base,height,tri_area;
	float radius,ans;
	
	//area of circle
	printf("\n-------------------------");
	printf("\narea of cicle ");
	printf("\n--------------------------");
	printf("\nenter radius of circle: ");
	scanf("%f",&radius);
	
	ans = PI*radius*radius;
	printf("\narea of circle: %0.2f",ans);
	
	//area of reactangle
	printf("\n--------------------------");
	printf("\narea of reactangle");
	printf("\n------------------------------");
	printf("\nenter width of rectangle :");
	scanf("%d",&length);
	
	printf("enter of width : ");
	scanf("%d",&width);
	
	rect_area=width*length;
	printf("\narea of rectangle :%d",rect_area);
	
	//area of triangle
	printf("\n--------------------------------");
	printf("\narea of triangle");
	printf("\n---------------------------------");
	printf("\nenter base of triangle : ");
	scanf("%d",&base);
	
	printf("\nenter height of triangle :");
	scanf("%d",&height);
	
	tri_area=(height*base) / 2;
	printf("\narea of triangle is: %d",tri_area);
	
	return 0;
	
		
	
}
