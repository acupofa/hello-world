#include<stdio.h>
int main()
{
  int n,b;
  int a=0;
  int sum=0;
  scanf("%d",&n);
  n=n*n*n;
  while (n>0)
  {
    a=n%10;
    sum=sum+a*a*a;
    n=n/10;
  }
  printf("%d",sum);
  return 0;
}