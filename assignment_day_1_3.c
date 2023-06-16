#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter money principal ammount in $  :    &");
	scanf("%d",&a);
    printf("Enter interest rate in percentage per year  :    ");
	scanf("%d",&b);
	printf("Enter time in months  :    ");
	scanf("%d",&c);
	d=a*b*c/1200;
	printf("Interest ammount in $ is :   $");
    printf("%d",d);
    printf("\nTotal money to pay in $ is :    ");
    printf("%d\n",a+d);
}