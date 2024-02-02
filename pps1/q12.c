#include<stdio.h>
#include<string.h>
int main()
{
  char str[255];
  gets(str);
  char letter;
  scanf("%c",&letter);
  int check=0;
  for(int i=0;i<strlen(str);i++)
  {
    if(str[i]==letter)
    {
        check=1;
        break;
    }
  }
  if (check==0)
  {
    printf("No match");
    return 0;
  }
  
  for(int i=0;i<strlen(str);i++)
  {
    if(str[i]==letter)
    {
        continue;
    }
    printf("%c",str[i]);
  }
}
