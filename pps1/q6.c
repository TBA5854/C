#include<stdio.h>
int main()
{
  int n,r1,m,r2,fac_n=1,fac_r1=1,fac_m=1,fac_r2=1,fac_n_r1=1,fac_m_r2=1;
  printf("Enter number of total consonants =");
    scanf("%d",&n);
    printf("Enter the number of chosen consonants=");
    scanf("%d",&r1);
    printf("Enter number of total vowels =");
    scanf("%d",&m);
    printf("Enter the number of chosen vowels=");
    scanf("%d",&r2);
    if(n<1 || r1<1 || m<1 || r2<1)
    {
      printf("Invalid input");
      return 0;
    }
    for(int i=1;i<=n;i++)
    {
      fac_n*=i;
    }
    for(int i=1;i<=r1;i++)
    {
      fac_r1*=i;
    }
    for(int i=1;i<=m;i++)
    {
      fac_m*=i;
    }
    for(int i=1;i<=r2;i++)
    {
      fac_r2*=i;
    }
    for(int i=1;i<=n-r1;i++)
    {
      fac_n_r1*=i;
    }
    for(int i=1;i<=m-r2;i++)
    {
      fac_m_r2*=i;
    }
    printf("Number of ways of selecting words:%d",(fac_n/(fac_r1*fac_n_r1))*(fac_m/(fac_r2*fac_m_r2)));
}
