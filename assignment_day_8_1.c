#include<stdio.h>
int countchar(char word[],char letter)
{
    int i=0;
    int count=0;
    while (word[i]!='\0')
    {
        if (word[i]==letter)
        {
            count++;
        }
        
        i++;
    }
    
        return count;
}
int main ()
{
    int c;
    printf("Enter your maximum limit :");
    scanf(" %d",&c);
    char word[c],l;
    printf("Enter your word :");
    scanf(" %s",word);
    printf("Enter the letter to search :");
    scanf(" %c",&l);
    printf("Number of occurances of %c in %s is %d",l,word,countchar(word,l));
}