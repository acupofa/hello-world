#include<stdio.h>
int main()
{
  int m,n,k;
  int day=0;
  scanf("%d %d %d",&n,&m,&k);
  while (n<m)
  {
    n=n+k;
    day++;
  }
  printf("%d",day);
  return 0;
}