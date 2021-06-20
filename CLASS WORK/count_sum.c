#include<stdio.h>
void main()
{
  int n=100,s=0,count=0;
  while(n <= 1000)
  {
     if(n%15 == 0)
     {
      printf("%d\n",n);
      s=s+n;
      count=count+1;
     }
     n=n+1;
  }
  printf("%d is the sum\n",s);
  printf("count = %d\n",count);
}
