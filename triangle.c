#include<stdio.h>
void main()
{
	
	int  ab=8 ;
	int  bc=4 ;
	int  ac=4 ;
	if (ab==bc && bc==ac)
	{
		printf("the triangle is equilateral");
	}
	else 
	{
		if (ab==bc|| bc==ac|| ab==ac)
		{
			printf("the triangle is isosceles");
		}
		else
		{
			printf("the triangle is scalene");
		}
	
		
		
	}
}