#include <stdio.h>
int main (){
    int a,b,r,prod;
    printf("Enter first number :  ");
    scanf("%d",&a);
    printf("Enter second number :  ");
    scanf("%d",&b);
    if (a<b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    r=a%b;
    prod=a*b;
    while(r!=0){
        //a=bq+r
        //b=rq+r'
        a=b;
        b=r;
        r=a%b;
    }
    printf("HCF is : ",b);
}