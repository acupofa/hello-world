#include<stdio.h>
int main()
{
  long n;
  int b=0;
  scanf("%ld",&n);
  while (n>0)
  {
    n=n/10;
    b++;
  }
  printf("%d",b);

  return 0;
}