#include<stdio.h>
 int main()
{
	float  f,c;
	
	printf("\nenter temperature in celcius : ");
	scanf("%f",&c);
	
	f=9.0/5.0*c+32;
	
	printf("the temperature in fahrenheit if = %.1f f",f);
	return 0;
}
