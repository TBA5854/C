//1.Find the maximum numbers of a given array
//2.Fibonocci series (first 10)
//Check if the given number is prime
#include<stdio.h>
int max()
{
    int r,i,buffer=0;
    printf("Enter number of elements in the array :");
    scanf("%d",&r);
    int a[r];
    for (int i = 0; i < r; i++)
    {
        printf("Enter your element for index %d : ",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < r; i++)
    {
        if (a[i]>buffer)
        {
            buffer=a[i];
        }
    }
    printf("Largest number is %d",buffer);
}
int fibonacci()
{
    int a=0,b=1,temp=1;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",b);
        temp=a+b;
        a=b;
        b=temp;
    }
    
}
int prime()
{
    int n,i;
    printf("Enter the number to check :");
    scanf(" %d",&n);
    i=0;
    for (i=2;i<n;i++)

    {
        if (n%i==0)
        {
            printf("Given number is not a prime");
            return 0;
        }
        
    }
    printf("GIven number is a prime");
}
int main()
{
	int ch;
	printf("Welcome \n");
    printf("Select the program\n");
   printf("1.Find max element in array\n");
   printf("2.Fibonacci series\n");
   printf("3.Check for prime\n") ;
    printf("Enter your selection : ");
    scanf(" %d",&ch);
    switch (ch)
    {
    case 1:
        max();
        break;
    case 2:
        fibonacci();
        break;
    case 3:
        prime();
        break;
    }}