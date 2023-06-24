//Given , Jose deposited 2500$ in his account for 3 years for interest rate of 6 % , how much money will he have at end of 3 years 
#include<stdio.h>
int interest(int time , int rate , int principal)
{
	int interest=time*rate*principal/100;
	return interest;
}
int main()
{
	int t = 3;
	int r=6;
	int p=2500;
	int i = interest(t,r,p);
	printf("By the end of 3 years , he will have a total of $%d in interest , adding it to principal ammount gives the total money he has , which is $%d",i,i+p);
}