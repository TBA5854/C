// 1.Create a program that asks the user to enter numbers until they enter a negative number. Use loop for this.
// 2.Write a program to calculate the sum of all numbers from 1 to 100 using a loop.
// 3.Create a program that prompts the user to enter a password and keeps asking until the correct password is entered. Use a do while loop for this.
#include<stdio.h>
int neg()
{
    int num;
    do
    {
        printf("Enter your number : ");
        scanf(" %d",&num);
        if(num>=0)
        {
            printf("You've inputed a positive number !\n");
        }
        else
        {
            break;
        }
        
    } while (1);
    printf("You've inputed a negative number ! So the program ends now!!");
}
int sum()
{
    int o;
    for (int i = 0; i <= 100; i++)
    {
        o+=i;;
    }
    printf("Sum to 100 is %d\n",o);
}
int pass_check()
{
    int password=5854;
    int usr,i;
    i=0;
    do
    {
        printf("Enter your password :   ");
        scanf(" %d",&usr);
        if (usr!=password)
        {
            printf("Invalid password , Try again!\n");
        }
    } while (usr!=password);
    printf("Access granted !");
    
}
int main()
{
    pass_check();
}
