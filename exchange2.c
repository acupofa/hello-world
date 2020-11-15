#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  scanf("%d",&a);
  b=a%10;
  c=a%100/10;
  d=a/100;
  
  e=b*100+c*10+d;
  printf("%d",e);
  
  return 0;
  
}