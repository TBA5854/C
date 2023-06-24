#include<stdio.h>
int size(char word[])
{
    int count=0;
    while (word[count]!='\0')
    {
        count++;
    }
    
        return count;
}
int palindrome(char word[],int count)
{
    for (int i = 0; i < count; i++)
    {
        if(word[i]==word[count-1-i])
        {
            continue;
        }
        else
        {
            return 0;
        }
        
    }
    return 1;
}
int main ()
{
    int c;
    printf("Enter your maximum limit :");
    scanf(" %d",&c);
    char word[c];
    printf("Enter your word :");
    scanf(" %s",word);
    if (palindrome(word,size(word))==1)
    {
        printf("%s is a palindrome",word);
    }
    else
    {
        printf("%s is not a palindrome",word);
    }
    
}