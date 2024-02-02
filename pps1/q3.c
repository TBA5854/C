#include<stdio.h>
int main()
{
  int income;
  scanf(" %d",&income);
  if(income<=150000)
    printf("no tax");
  else if(income<=300000)
    printf("tax:%d",(income-150000)/10);
  else if(income<=500000)
    printf("tax:%d",(income-300000)*20/100+15000);
  else
    printf("tax:%d",(income-500000)*30/100+55000);
}
