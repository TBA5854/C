#include<stdio.h>
int main ()
{
    int c,vow,con;
    printf("Enter your maximum limit :");
    scanf(" %d",&c);
    char word[c],l;
    printf("Enter your word :");
    scanf(" %s",word);
    int i;
    i=0;
    while (1)
    {
        if (word[i]=='\0')
        {
            break;
        }
        i++;
        if (word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
        {
            vow++;
        }
        else
        {
            con++;
        }
        
    }
    printf("Number of vowels are %d and consonants are %d",vow,con);
}