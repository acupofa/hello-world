#include<stdio.h>
int main()
{
  double r,h;
  double a=3.1415926;
  scanf("%lf %lf",&r,&h);
  printf("%.2lf %.2lf %.2lf %.2lf",2*a*r,a*r*r,2*a*r*h,a*r*r*h);

}