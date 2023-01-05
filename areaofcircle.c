#include<stdio.h>
#define PI 3.14
int main()
{
	float radius,area;
	
	printf("\nenter radius of cicle : ");
	scanf("%f",&radius);
	
	
	area=PI*radius*radius;
	
	printf("\narea of circle : %0.4f",area);
return 0;
}
