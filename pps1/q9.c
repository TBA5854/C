#include<stdio.h>
int neon(int n)
{
  int sq = n * n;
  int sum = 0;
  while (sq != 0)
  {
    sum = sum + sq % 10;
    sq = sq / 10;
  }
  return (sum == n);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Invalid");
        return 0;
    }
    if (neon(n))
        printf("Neon Number");
    else
        printf("Not a Neon Number");
    return 0;
}
