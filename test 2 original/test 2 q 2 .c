#include<stdio.h>
void main() {
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	{

		if (num>0)

			printf("number is positive");



		else if(num==0)
			printf("number is neutral");
		else if(num<0)
			printf("number is negative");
	}
}