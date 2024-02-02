#include<stdio.h>
int main()
{
  int sum_pos=0,sum_neg=0,count_pos=0,count_neg=0,input;
  printf("Enter the numbers: ");
  do
  {
    scanf("%d",&input);
    if(input>0){
    sum_pos+=input;
      count_pos++;}
    else if(input<0)
{      count_neg++;
      sum_neg+=input;}
  } while (input!=-1);
  sum_neg++;
  count_neg--;
  if (count_neg==0)
  {
    count_neg=1;
  }
  else if (count_pos==0)
  {
    count_pos=1;
}
  printf("The Average of positive numbers is: %f\n",(float)sum_pos/count_pos);
  printf("The Average of negative numbers is: %f\n",(float)sum_neg/count_neg);

}
