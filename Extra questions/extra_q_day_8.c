#include<stdio.h>
#include <string.h>
int write()
{
    FILE *j;
    j=fopen("tesT.txt","w");
    fprintf(j,"I want to die as the day declines, \nat high sea and facing the sky, \nwhile agony seems like a dream \nand my soul like a bird that can fly. ");
    fclose(j);
}
int read()
{
    FILE *j;
    j=fopen("tesT.txt","r");
    char buffer[255];
    while (fscanf(j,"%s",buffer)!=EOF)
    {
        printf("%s ",buffer);
    }
    
    fclose(j);
}
int count_char()
{
    FILE *j;
    j=fopen("tesT.txt","r");
    char buffer[1];
    int c=0;
    while (fscanf(j,"%c",buffer)!=EOF)
    {
        c++;
    }
    printf("Number of letters are :%d",c);
    fclose(j);
}
int count_word()
{
    FILE *j;
    j=fopen("tesT.txt","r");
    char buffer[1];
    int c=0;
    char b =' ';
    while (fscanf(j,"%c",buffer)!=EOF)
    {
        if (*buffer==b)
        {
            c++;
        }
    }
    printf("Number of words are :%d",c);
    fclose(j);
}
int count_line()
{
    FILE *j;
    j=fopen("tesT.txt","r");
    char buffer[1];
    int c=0;
    char b ='\n';
    while (fscanf(j,"%c",buffer)!=EOF)
    {
        if (*buffer==b)
        {
            c++;
        }
    }
    printf("Number of lines are :%d",c+1);
    fclose(j);
}

int main()
{
    {
	int ch;
	printf("Welcome \n");
    printf("Select the program\n");
   printf("1.Write to file\n");
   printf("2.Read from file\n");
   printf("3.Count number of characters in file\n") ;
   printf("4.Count number of words in file\n");
   printf("5.Count number of lines in file\n");
    printf("Enter your selection : ");
    scanf(" %d",&ch);
    switch (ch)
    {
    case 1:
        write();
        break;
    case 2:
        read();
        break;
    case 3:
        count_char();
        break;
    case 4:
        count_word();
        break;
    case 5:
        count_line();
        break;
    return 0;
}
}
}