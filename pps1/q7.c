#include<stdio.h>
int main()
{
  int n;
    scanf("%d",&n);
    int check=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            check=0;
            break;
        }
    }
    if(check==1)
    {
        printf("%b\n",n);
    }
    else
    {
        printf("%x\n",n);
    }
}
