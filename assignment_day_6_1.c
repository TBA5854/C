#include <stdio.h>
int greatest_num(int n1,int n2, int n3)
{
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
int main()
{
    int n1,n2,n3;
    printf("Enter your first number :   ");
    scanf("%d",&n1);
    printf("Enter your second number :   ");
    scanf("%d",&n2);
    printf("Enter your third number :   ");
    scanf("%d",&n3);
    greatest_num(n1,n2,n3);
}