#include <stdio.h>
int main()
{
  int i;
  int b=1;
  scanf("%d",&i);
  if (i==0)
  {
    b=1;
  }
  else
  {
    for (; i>0; i--)
  {
    b=b*i;
  }
  }
  printf("%d",b);
  return 0;
}