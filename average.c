#include<stdio.h>
int main()
{
  double a,b;
  scanf("%lf %lf",&a,&b);
  double c=(a+b)/2.0;
  printf("%f和%f的平均值=%f\n",a,b,c);
  return 0;
}