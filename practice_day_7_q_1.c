#include<stdio.h>
int main ()
{
    int c;
    printf("Enter your maximum limit :");
    scanf(" %d",&c);
    char word[c],l;
    printf("Enter your word :");
    scanf("%s",word);
    printf("Enter the character to search :");
    scanf(" %c",&l);
    int i;
    i=0;
    while (1)
    {
        if (word[i]==l)
        {
            break;
        }
        i++;
    }
    printf("Index is %d ",i);
}