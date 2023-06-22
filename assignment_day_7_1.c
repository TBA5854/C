#include<stdio.h>
float avg(int a , int b)
{
    return (a+b)/2;
}
int main()
{
    int a,b;
    printf("Enter your 1st number :");
    scanf("%d",&a);
    printf("Enter your 2nd number :");
    scanf("%d",&b);
    printf("Average of the given two numbers is : %f",avg(a,b));
}