#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d:%d",&a,&b);
    if(a== 0)
    {   a= 12;
        printf("%d:%02d AM",a,b);
        }
    else if(a== 12) printf("%d:%02d PM",a,b);
    else if(a>=1&&a<=11)
    {   printf("%d:%02d AM",a,b);}
    else {c= a-12;
        printf("%d:%02d PM",c,b);}
        return 0;
}