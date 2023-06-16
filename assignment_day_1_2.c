#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter money spent on computers in $  :    &");
	scanf("%d",&a);
    printf("Enter money spent on tables in $  :    $");
	scanf("%d",&b);
	printf("Enter money spent  on chairs in $  :    $");
	scanf("%d",&c);
	d=a+b+c;
	printf("Number total money spent in $ is : $");
    printf("%d",d);
    printf("\n");
}