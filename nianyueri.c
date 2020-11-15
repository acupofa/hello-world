#include<stdio.h>
int main()
{
  int year,month,a,r;
  scanf("%d\\%d",&year,&month);
  if (year%4== 0)
  {
      if (year%100!= 0)
      {
        r= 1;
      }else if (year%400== 0) r= 1;
      else
      {
        r= 0;
      }
    }else
  {
    r= 0;
  }
  
  if (r== 1&&month==2)
  {
    a= 29;
    printf("%d",a);
    //return 0;
  }else if(r== 0&&month==2)
  {
    a= 28;
    printf("%d",a);
    //return 0;
  }else if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
  {
    a= 31;
    printf("%d",a);
    //return 0;
  }else
  {
    a= 30;
    printf("%d",a);
    //return 0;
  }
  
   return 0;
  
}