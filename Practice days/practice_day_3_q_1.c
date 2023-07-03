#include <stdio.h>
int main()
{
    int m_value,range;
    printf("Enter the Multiplication value: ");
    scanf("%d",&m_value);
    printf("Enter the Maximum Range : ");
    scanf("%d",&range);
    for (int i = 1; i < range+1; i++)
    {
        printf("%d x %d = %d\n",i,m_value,i*m_value);
    }
    
}