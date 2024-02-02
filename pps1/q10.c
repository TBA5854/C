#include<stdio.h>
int main()
{
  int n,a,b,c,d;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid");
        return 0;
    }
    for(int i=0;i<4;i++)
    {
        switch(i){
            case 0:
                a=n%10;
                break;
            case 1:
                b=n%10;
                break;
            case 2:
                c=n%10;
                break;
            case 3:
                d=n%10;
                break;
        }
        n=n/10;
    }
    //sort a,b,c,d in ascending order
    int temp;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(a>d)
    {
        temp=a;
        a=d;
        d=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if(b>d)
    {
        temp=b;
        b=d;
        d=temp;
    }
    if(c>d)
    {
        temp=c;
        c=d;
        d=temp;
    }
    printf("%d",a*10+b+c*10+d);
}
