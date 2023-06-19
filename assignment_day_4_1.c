#include<stdio.h>
int main()
{
	int i,num,o;
	printf("Enter your input value: ");
	scanf(" %d",&num);
	for (i=1 ;i<=num;i++)
	{
		o*=i;
	}
	printf("Factorial of %d is %d",num,o);
}