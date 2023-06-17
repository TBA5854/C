#include<stdio.h>
int main()
{
    int range;
    printf("Enter the Maximum Range : ");
    scanf("%d",&range);
    for (int i = 1; i < range+1; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}   