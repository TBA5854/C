#include<stdio.h>
int main()
{
  int pid;float ammount;
    printf("Enter the product id");
    scanf("%d",&pid);
    printf("Enter the ammount");
    scanf("%f",&ammount);
    if(ammount<0)
    {
        printf("Invalid ammount");
        return 0;
    }
    switch(pid)
    {
        case 1:
            printf("Total ammount is");
            if(ammount>1000)
            printf(" %f",ammount*0.9);
            else
            printf(" %f",ammount);
            break;
        case 2:
            printf("Total ammount is");
            if(ammount>750)
            printf(" %f",ammount*0.95);
            else
            printf(" %f",ammount);
            break;
        case 3:
            printf("Total ammount is");
            if(ammount>500)
            printf(" %f",ammount*0.9);
            else
            printf(" %f",ammount);
            break;
        default:
            printf("Invalid product id");
    }
}
