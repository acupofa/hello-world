#include"stdio.h"
int main()
{
 int a,b,c,d,e,f,g,h;
 scanf("%d:%d:%d\n",&a,&b,&c);
 scanf("%d:%d:%d\n",&d,&e,&f);
 g=(d-a)*60+(e-b)*60+(f-c);
 if(g>3600)
 {
  d=g/3600;
  e=g%3600;
  e=e/60;21;
  f=e%60;
  printf("%02d:%02d:%02d",d,e,f);
 }
 else if(g<3600&&g>60)
 {
  d=0;

  e=g/60;
  f=e%60;
  printf("%02d::%02d::%02d",d,e,f);
 }else if(g<60)
 {
     d=0;
     e=0;
     f=g;
   printf("%02d::%02d::%02d",d,e,f);
 }
  return 0;
}
