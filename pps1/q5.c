#include<stdio.h>
int main()
{
    char workera[100], workerb[100];
    int i, j,wagea,wageb;
    printf("Enter the name of worker a: ");
    scanf("%s", workera);
    printf("Enter work hours of worker a: ");
    scanf("%d", &i);
    printf("Enter the name of worker b: ");
    scanf("%s", workerb);
    printf("Enter work hours of worker b: ");
    scanf("%d", &j);
    printf("Name of worker a: %s\n", workera);
    if(i < 5)
        wagea= 0;
    else if (i > 8)
        wagea= 0;
    else
        switch(i)
        {
            case 5:
                wagea = 500;
                break;
            case 6:
                wagea = 500 + 500 * 0.1;
                break;
            case 7:
                wagea = 500 + 500 * 0.2;
                break;
            case 8:
                wagea = 500 + 500 * 0.3;
                break;
        }
    if(j < 5)
        wageb= 0;
    else if (j > 8)
        wageb= 0;
    else
        switch(j)
        {
            case 5:
                wageb = 500;
                break;
            case 6:
                wageb = 500 + 500 * 0.1;
                break;
            case 7:
                wageb = 500 + 500 * 0.2;
                break;
            case 8:
                wageb = 500 + 500 * 0.3;
                break;
        }


    if (wagea == 0)
        printf("Wage of worker a: Not applicable\n");
    else
        printf("Received wage of worker a: %d\n", wagea);
    printf("Name of worker b: %s\n", workerb);
    if (wage(wageb) == 0)
        printf("Wage of worker b: Not applicable\n");
    else
        printf("Received wage of worker b: %d\n", wageb);
    return 0;
}
