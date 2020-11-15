#include<stdio.h>
int main()
{
  long n;
  int m,a;
  int sum=0;
  scanf("%ld %d",&n,&m);
  while (n>0)
  {
    a=n%10;
    if (m==a)
    {
      sum++;
      n=n/10;
    }
    else
    {
      n=n/10;
    }
  }
  printf("%d",sum);
  return 0;
}