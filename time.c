#include<stdio.h>
int main()
{
  int a,b,c;
  int d,e,f;

  scanf("%d %d %d"&a,&b,&c);
  scanf("%d %d %d",&d,&e,&f);

  int ih = hour2 - hour1;
  int im = minute2 - minute1;
  if ( im<0) {
    im = 60 + im;
    ih --;
  }

  printf("时间差是%d小时%d分。\n",ih,im);
  
  return 0;
}