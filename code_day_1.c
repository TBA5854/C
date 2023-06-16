/*Create a program to apply the values into the given Formulas:

1. a*2+b*2+2ab
2. Find the Area of rectangle = W*H
3. (a*x) * (b*y)
4. y=xa
5. Minutes = Hours * 60

*note: use any variable values*/
#include<stdio.h>
int sum_of_square()
{
    int a,b,c;
    printf("Enter first number :  ");
    scanf("%d",&a);
    printf("Enter second number :  ");
    scanf("%d",&b);
    c=a*a+b*b+2*a*b;
    printf("Sum of squares of numbers is : ");
    printf("%d",c);
}
int area_of_rectangle()
{
    int a,b,c;;
    printf("Enter length :  ");
    scanf("%d",&a);
    printf("Enter breadth :  ");
    scanf("%d",&b);
    c=a*b;
    printf("Area of the given rectangle is : ");
    printf("%d",c);
}
int five_multiplyer()
{
    int x,y;
    printf("Enter value for x :  ");
    scanf("%d",&x);
    y=x*5;
    printf("5 times x is :    ");
    printf("%d",y);
}
int fifty_multiplyer()
{
    int x,y,z;
    printf("Enter value for x :  ");
    scanf("%d",&x);
    printf("Enter value for y :  ");
    scanf("%d",&y);
    z=(x*5)*(y*10);
    printf("50 times x multiplied by y is :    ");
    printf("%d",z);
}
int hrs_to_min()
{
    int x,y;
    printf("Enter hours to convert:  ");
    scanf("%d",&x);
    y=x*60;
    printf("%d",x);
    printf("hours in minute is :    ");
    printf("%d",y);
}
int main()
{
    printf("Welcome\n");
    printf("Choose your program :\n\n");
    printf("1.Sum of square \n2.Area of rectangle \n3. Five multiplier \n4.Product of 2 numbers multiplied by 50 \n 5.Hours to minuites");
    int h;
    scanf("%d",&h);
    while(1==1)
    {
        if (h==1)
        {
            sum_of_square();
            break;
        }
        else if (h==2)
        {
            area_of_rectangle();
            break;
       
        }
        else if (h==3)
        {
            five_multiplyer();
            break;
        }
        else if (h==4)
        {
            fifty_multiplyer();
            break;
        }
        else if (h==5)
        {
            hrs_to_min();
            break;
        }
        
        else
        {
            break;
        }
        
    }
}