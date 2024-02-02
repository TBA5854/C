#include<stdio.h>
int main()
{
  int salary;
  char grade;
    printf("Enter your salary: ");
    scanf("%d",&salary);
    printf("Enter your grade: ");
    scanf(" %c",&grade);
    int bonus=0;
    if(grade=='A')
    {
        bonus=salary*0.05;
    }
    else if(grade=='B')
    {
        bonus=salary*0.1;
    }
    else{
        printf("No such category");
        return 0;
    }
    if (salary<10000)
    {
        bonus+=salary*0.02;
    }
    printf("Your bonus is %d",bonus);
    printf("\nYour total to be paid is %d",salary+bonus);
    return 0;
}