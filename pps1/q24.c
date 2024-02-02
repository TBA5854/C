#include<stdio.h>
int main()
{
  int n1,n2;
    scanf("%d%d",&n1,&n2);
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int n3=n1+n2;
    int arr3[n3];
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        arr3[n1+i]=arr2[i];
    }
    printf("elements after merging :");
    for(int i=0;i<n3;i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\nThe sorted elements are : ");
    for(int i=0;i<n3;i++)
    {
        for(int j=i+1;j<n3;j++)
        {
            if(arr3[i]>arr3[j])
            {
                int temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    for(int i=0;i<n3;i++)
    {
        printf("%d ",arr3[i]);
    }



}