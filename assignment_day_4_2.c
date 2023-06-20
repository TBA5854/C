#include<stdio.h>

float main()
{
    int n1,n2;
    char c;
    printf("Simple calculator\n");
    printf("Select the operation\n");
   printf("1.Addition\n");
   printf("2.Subtraction\n");
   printf("3.Multiplication\n") ;
   printf("4.Division\n");
    int ch ;
    printf("Enter your selection : ");
    scanf(" %d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter the first value : ");
        scanf(" %d",&n1);
        printf("Enter the second value : ");
        scanf(" %d",&n2);
        printf("Addition of %d , %d is %d",n1,n2,n1+n2);
        break;
    
    case 2:
        printf("Enter the first value : ");
        scanf(" %d",&n1);
        printf("Enter the second value : ");
        scanf(" %d",&n2);
        printf("Subtraction of %d , %d is %d",n1,n2,n1-n2);
        break;
    case 3:
        printf("Enter the first value : ");
        scanf(" %d",&n1);
        printf("Enter the second value : ");
        scanf(" %d",&n2);
        printf("Multiplication of %d , %d is %d",n1,n2,n1*n2);
        break;
    case 4:
        printf("Enter the first value : ");
        scanf(" %d",&n1);
        printf("Enter the second value : ");
        scanf(" %d",&n2);
        printf("Division of %d , %d is %.2f",n1,n2,n1/(float)n2);//ask sir
        break;

    }
    printf("\nDo you want to continue ?(Y/N)");
    scanf(" %c",&c);
    if(c=='Y')
    {
    	main();
    }
    printf("Thank You!");
}