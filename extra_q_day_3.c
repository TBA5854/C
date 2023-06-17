/*Write a C program that calculates the grade of a student based on their marks using if-else if statements (A for marks >= 90, B for marks >= 80, and so on).

Write a C program to find the largest of three numbers using nested if statements.

Write a C program that checks if a year is a leap year using if-else statements (considering the rules: divisible by 4, but not divisible by 100 unless divisible by 400).

Write a C program that determines if a given character is a vowel or a consonant using if-else statements.

Write a C program that converts a given number of minutes into hours and minutes using if-else statements and nested if statements.*/
#include<stdio.h>
int grade()
{
    int m;
    printf("Enter your mark :   ");
    scanf("%d",&m);
    if (m>=90)
    {
        printf("You've got a A !");
    }
    else if (m>=80)
    {
        printf("You've got a B !");
    }
    else if(m>=70)
    {
        printf("You've got a C !");
    }
    else if (m>=60)
    {
        printf("You've got a D !");
    }
    else if (m>=50)
    {
        printf("You've got a E !");
    }
    else
    {
        printf("You've got a F !");
    }
}
int greatest_num()
{
    int n1,n2,n3;
    printf("Enter your first number :   ");
    scanf("%d",&n1);
    printf("Enter your second number :   ");
    scanf("%d",&n2);
    printf("Enter your third number :   ");
    scanf("%d",&n3);
    if (n1>=n2)
    {
        if (n1>=n3)
        {
            printf("%d is the greatest number",n1);
        }
        else
        {
            printf("%d is the greatest number",n3);
        }
        
        
    }
    else if (n2>=n3)
    {
        printf("%d is the greatest number",n2);
    }
    else
    {
        printf("%d is the greatest number",n3);
    }
    
}
int leap_year()
{
    int year;
    printf("Enter the year to check for leap year :   ");
    scanf("%d",&year);
    if (year%400==0)
    {
        printf("%d is a leap year !",year);
    }
    else if (year%4==0&&year%100!=0)
    {
        printf("%d is a leap year !",year);
    }
    else
    {
        printf("%d is not a leap year !",year);
    }
    
}
int vowel_check()
{
    char c;
    printf("Enter the letter to check for vowel :   ");
    scanf("      %c",&c);
    if (c=='a'||c=='A')
    {
        printf("%c is a vowel",c);
    }
    else if (c=='e'||c=='E')
    {
        printf("%c is a vowel",c);
    }
    else if (c=='i'||c=='I')
    {
        printf("%c is a vowel",c);
    }
    else if (c=='o'||c=='O')
    {
        printf("%c is a vowel",c);
    }
    else if (c=='u'||c=='U')
    {
        printf("%c is a vowel",c);
    }
    else
    {
        printf("%c is not a vowel",c);
    }
    
}
int mins_to_hrs_n_mins()
{
    int min,h,m;
    printf("Enter minutes to convert :   ");
    scanf("%d",&min);
    h=min/60;
    m=min%60;
    if (min>1)
    {
        printf("%d minutes is ",min);
    }
    else
    {
        printf("%d minute is ",min);
    }
    if (h>0)
    {
        if (h>1)
        {
            printf("%d hours",h);
        }
        else 
        {
            printf("%d hour",h);
        }
        if (m>0)
        {
            printf(" and ");
        }
        
    }
    if (m>0)
    {
        if (m>1)
        {
            printf("%d minutes",m);
        }
        else
        {
            printf("%d minute",m);
        }
    }
       
}
int main()
{
    int ch;
    printf("Welcome\n");
    printf("Choose your program :\n\n");
    printf("1.Grade\n2.Finding greatest number\n3.Checking for leap year\n4.Vowel checker\n5.Minutes to hours converter\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        grade();
        break;
    
    case 2:
        greatest_num();
        break;
    case 3:
        leap_year();
        break;;
    case 4:
        vowel_check();
        break;
    case 5:
        mins_to_hrs_n_mins();
        break;
    default:
        break;
    }
}
