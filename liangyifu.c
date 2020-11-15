#include<stdio.h>
int main()
{
  int l,w,p;
  while (scanf("%d %d",&l,&w)!=EOF)
  {
    p=l/w;
    printf("%d\n",p);
  }
  return 0;
}