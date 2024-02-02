#include<stdio.h>
int main()
{
  int dob,sum_even=0,sum_odd=0,n,i=1;
    printf("Enter your date of birth");
    scanf("%d",&dob);
    n=dob;
    for(int t=0;t<8;t++)
    {
        n=n/10;
    }
    if (n>0||10000000>dob)
    {
        printf("Cannot be processed");
        return 1;
    }
    n=dob;
    while(n!=0)
    {
        if(i)
        {
            i=0;
            sum_even=sum_even+n%10;
        }
        else
        {
            i=1;
            sum_odd=sum_odd+n%10;
        }
        n=n/10;
    }
    int lucky=sum_odd*3+sum_even;
    if(lucky%10==0)
    {
        printf("You have entered %d , is a lucky number",dob);
    }
    else
    {
        printf("You have entered %d , is not a lucky number",dob);
    }
}
