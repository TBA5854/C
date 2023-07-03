/*
Reverse a number , input 1234 , output 4321
Count the no of digits using , input 1234 , output 4
Check for palindrome*/
#include <stdio.h>
int rev()
{
    int c,num;
    printf("Enter number to be reversed : ");
    scanf(" %d",&num);
    while (num>0)
    {
        c=c+(num%10);
        num=num-(num%10);
        c=c*10;
        num=num/10;
    }
    c=c/10;
    printf("Reversed number is : %d\n",c);  
}
int counter()
{
     int c,num;
    printf("Enter number to be digit counted : ");
    scanf(" %d",&num);
    while (num>0)
    {
        c++;
        num=num-(num%10);
        num=num/10;
    }
    printf("Digit count is : %d\n",c);  

}
int palindrome()
{
     int c,n,num;
    printf("Enter number to be checked for palindrome : ");
    scanf(" %d",&num);
    n=num;
    while (num>0)
    {
        c=c+(num%10);
        num=num-(num%10);
        c=c*10;
        num=num/10;
    }
    c=c/10;

    if (n==c)
    {
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
    
}
int main ()
{
    int ch;
    printf("Welcome\n");
    printf("Choose your program :\n\n");
    printf("1.Number reverser\n2.Digit counter\n3.Palindrome\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        rev();
        break;
    
    case 2:
        counter();
        break;
    case 3:
        palindrome();
        break;
    }
}