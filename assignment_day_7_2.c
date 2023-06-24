#include<stdio.h>
int stringlen(char word[])
{
    int i=0;
    while (word[i]!='\0')
    {
        i++;
    }
    
        return i;
}
int main ()
{
    int c;
    printf("Enter your maximum limit :");
    scanf(" %d",&c);
    char word[c];
    printf("Enter your word :");
    scanf(" %s",word);
    printf("Size of word is :%d",stringlen(word));
}