#include<stdio.h>
void main()
{
	int a=94;
	int b=102;
	int c=48;
	if (a>=b && a>=c)
	printf("a is greater than b and c");
	else 
	{
		if (b>=c && b>=a)
		printf("b is greater than a and c");
		else if(c>=a && c>=b)
		printf("c is greater than a and b");
	}
}