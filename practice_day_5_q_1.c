#include<stdio.h>
int main()
{
	int c;
	printf("Enter number of steps for making star : ");
	scanf(" %d",&c);
	for (int i =1;i<=c;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",i*2);
		}
		printf("\n\n");
	}
	
}