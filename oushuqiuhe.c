#include<stdio.h>
int main()
{
  long n;
  int b=0;
  int sum=0;
  scanf("%ld",&n);
  while (n>0)
  {
    b=n%10;
    if (b%2==0)
    {
      sum+=b;
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