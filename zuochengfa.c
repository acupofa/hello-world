#include<stdio.h>
int main()
{
  int a,b,i,c;
  scanf("%d",&i);
  a=i;
  for (c=1;c<=i;c++)
  {
    b=a*c;
    printf("%d*%d=%d\n",a,c,b);
  }
  return 0;
}