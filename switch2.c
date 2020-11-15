#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  switch (a)
  {
  case 1:printf("Monday\n",a); 
  break;
  case 2:printf("Tuesday\n",a);
  break;
  case 3:printf("Wednesday\n",a);
  break;
  case 4:printf("Thursday\n",a);
  break;
  case 5:printf("Friday\n",a);
  break;
  case 6:printf("Saturday\n",a);
  break;
  case 7:printf("Sunday\n",a);
  default:return 0;
    break;
  }
  return 0;
}