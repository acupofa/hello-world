#include<stdio.h>
int main()
{
  int n,a,b;
  scanf("%d",&n);
  a = n % 5;
  b = n % 3;
  if (a==0&&b==0)
  {
    printf("Yes");
  }else
  {
    printf("No");
  }

  return 0;
  
  
}