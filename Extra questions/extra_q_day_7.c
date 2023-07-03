#include <stdio.h>
int avg()
{
	int r, i, c;
	c=0;
	printf("Enter number of elements in the array :");
	scanf("%d", &r);
	int a[r];
	int b[r];
	for (int i = 0; i < r; i++)
	{
		printf("Enter your element for index %d : ", i);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < sizeof(a) / 4; i++)
	{
		c = c + a[i];
	}
	printf("Average of elements is : %f", c / (float)(sizeof(a) / 4));
}
int reverse()

{
	int r, i, c;
	c=0;
	printf("Enter number of elements in the array :");
	scanf("%d", &r);
	int a[r];
	int b[r];
	for (int i = 0; i < r; i++)
	{
		printf("Enter your element for index %d : ", i);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < sizeof(a)/4; i++){
        b[i]=a[sizeof(a)/4-(i+1)];
    }
    printf("Reversed array is : {");
    for (i = 0; i < sizeof(a)/4-1; i++){
        printf("%d,",b[i]);
    }
    printf("%d",b[r-1]);
    printf("}");
}
int sum()
{
	int r, i, c;
	c=0;
	printf("Enter number of elements in the array :");
	scanf("%d", &r);
	int a[r];
	int b[r];
	for (int i = 0; i < r; i++)
	{
		printf("Enter your element for index %d : ", i);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < sizeof(a)/4; i++)
    {
        if (a[i]>0){
        c=c+a[i];
    }
    }
    printf("Sum of all +ve elements is %d",c);

}
int even()
{
	int r, i, c;
	c=0;
	printf("Enter number of elements in the array :");
	scanf("%d", &r);
	int a[r];
	for (int i = 0; i < r; i++)
	{
		printf("Enter your element for index %d : ", i);
		scanf("%d", &a[i]);
	}
	    for (i = 0; i < sizeof(a)/4; i++)
    {
        if (a[i]%2==0){
        c++;
    }
}
printf("No of even elements is %d",c);}

int main()
{
	int ch;
	printf("Welcome \n");
    printf("Select the program\n");
   printf("1.Average the elements\n");
   printf("2.Reverse the array\n");
   printf("3.Sum all +ve numbers\n") ;
   printf("4.Count number of even number\n");
    printf("Enter your selection : ");
    scanf(" %d",&ch);
    switch (ch)
    {
    case 1:
        avg();
        break;
    case 2:
        reverse();
        break;
    case 3:
        sum();
        break;
    case 4:
        even();
        break;
}}