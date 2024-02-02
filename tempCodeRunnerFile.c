#include<stdio.h>
int main()
{
  int large_1=0,large_2=0,sum=0,check=0;
  for(int i=0;i<6;i++)
  {
    int usr;
    scanf("%d",&usr);
    if(usr>large_1)
    {
      large_2=large_1;
      large_1=usr;
    }
    else if(usr>large_2)
    {
        check=1;
      large_2=usr;
    }
  }
    if(check==0)
    {
      printf("All are Same");
      return 0;
    }
    while(large_2>0)
    {
      sum+=large_2%10;
      large_2/=10;
    }
  printf("%d",sum);
}
