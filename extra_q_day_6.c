/*Write a C program to calculate the average of elements in an array.

Write a C program to reverse the elements of an array.

Write a C program to find the sum of all positive elements in an array.

Write a C program to count the number of even elements in an array.*/
#include<stdio.h>
int main()
{
    int r,i,ch,c=0;
    printf("Enter number of elements in the array :");
    scanf("%d",&r);
    int a[r];
    int b[r];
    for (int i = 0; i < r; i++)
    {
        printf("Enter your element for index %d : ",i);
        scanf("%d",&a[i]);
        }
        goto menu;
    avg:
    for (i = 0; i < sizeof(a)/4; i++)
    {
        c=c+a[i];
    }
    printf("Average of elements is : %f",c/(float)(sizeof(a)/4));
    goto end;
    rev:
    for (i = 0; i < sizeof(a)/4; i++){
        b[i]=a[sizeof(a)/4-(i+1)];
    }
    printf("Reversed array is : {");
    for (i = 0; i < sizeof(a)/4-1; i++){
        printf("%d,",b[i]);
    }
    printf("%d",b[r-1]);
    printf("}");
    goto end;
    sum_of_odd:
    for (i = 0; i < sizeof(a)/4; i++)
    {
        if (a[i]>0){
        c=c+a[i];
    }
    }
    printf("Sum of all +ve elements is %d",c);
    goto end;
    count_of_even:
    for (i = 0; i < sizeof(a)/4; i++)
    {
        if (a[i]%2==0){
        c++;
    }
    }
    printf("No of even elements is %d",c);
    goto end;
    menu:
    printf("Welcome \n");
    printf("Select the program\n");
   printf("1.Average the elements\n");
   printf("2.Reverse the array\n");
   printf("3.Sum all +ve numbers\n") ;
   printf("4.Count number of even number\n");
    printf("Enter your selection : ");
    scanf(" %d",&ch);
    switch (ch)
    {
    case 1:
        goto avg;
        break;
    case 2:
        goto rev;
    case 3:
        goto sum_of_odd;
        break;
    case 4:
        goto count_of_even;
        break;
    }
    end:
    return 0;
}