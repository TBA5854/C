#include<stdio.h>
int main()
{
    int c,num,n;
    c=0;
    printf("Enter the input value : ");
    scanf("%d",&num);
    n=num;
    while (num>0)
    {
        c=c+((num%10)*(num%10)*(num%10));
        //printf("%d",c);
        num=num-(num%10);
        num=num/10;
    }
  //  printf("%d",c);
    if (n==c)
    {
        printf("%d is an Armstrong number",n);
    }
    else{
        printf("%d is not an Armstrong number",n);
    }
}