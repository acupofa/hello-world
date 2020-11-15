#include <stdio.h>
int main()
{
    int a,n;
    int b=0;
    long sum=0;
    scanf("%d\n%d",&a,&n);
    for (;n>0;n--)
    {
      b=b+a;
      a=a*10;
      sum=sum+b;
    }
    printf("%ld",sum);
    return 0;
}