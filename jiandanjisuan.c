#include <stdio.h>
int main()
{
   int sum=0,i,n,a,max,min,aver;
   //一定要对sum初始化；
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a); //输入并输入一个数据比较一次，找出最值，并累加求和；
       if(i==1)
       /*/默认第一个数为最值，也可以将最值得初始值赋为不在题目条件范围内的数，
       如max = -1，min = 10000000000000；*/
       {
           max=a;
           min=a;
       }
       if(a<min)
       min=a;
       if(a>max)
        max=a;
       sum=sum+a;

   }
   aver=sum/n;
    printf("%d %d %d",max,min,aver);
    return 0;
}