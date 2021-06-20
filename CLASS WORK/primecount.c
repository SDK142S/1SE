#include<stdio.h>
void main()
{
  //Primenumbers from 1 to 100
  int i,flag=0,p=1,q=100,n;
  n=p;
  while(n<=q)
  {
    flag=0;
    for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
      {
        flag=1;
        break;
      }
    }
    if(flag==0 && n>=2)
    {
      printf("%d\n",n);
    }
    n=n+1;
  }
}
