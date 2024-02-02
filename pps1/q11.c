#include<stdio.h>
void update(int * a ,int* b)
{
    int val1,val2;
    val1=*a;
    val2=*b;
    *a=val1*val2;
    *b=val1+val2;
}
int main()
{
  int a,b;
    scanf("%d%d",&a,&b);
    int *p1=&a,*p2=&b;
    update(p1,p2);
    printf("%d\n%d",a,b);
}
