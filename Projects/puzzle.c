//Given : You have 15 chocolates and 3 wrappers of chocolate can be exchanged for another chocolate . If you start with 15 , how many total chocolates can you get?
#include<stdio.h>
int main()
{
    int choc=15;
    int wrap=15;
    while (wrap>2)
    {
        wrap-=3;
        choc++;
        wrap++;
    }
    printf("The total number of chocolates you will have is :%d",choc);
}