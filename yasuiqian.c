#include<stdio.h>
int main()
{
  int T;
  long N;
  scanf("%d",&T);
  while (T>0)
  {
    T--;
    scanf("%d",&N);
    if (1000000%N==0)
    {
      printf("%ld\n",1000000/N);
    }
    else
    {
      printf("No\n");
    }
    
    
  }
  return 0;


}
