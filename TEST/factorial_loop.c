/*
    Write a program to add the first seven terms of the following series using for loop.

    1/1!+ 2/2!+3/3!+ ...
*/
#include<stdio.h>
void main()
{
  int n=1,i;
  float nfact=1,N=0,m;
  printf("\n");
  for(n=1;n<=7;n++)
  {
    nfact=1;
    for(i=1;i<=n;i++)
    {
        nfact=nfact*i;
    }
    printf("  (%d / %d!) ",n,n);
    if(n<7)
    {
      printf(" + ");
    }
    m=(n/nfact);
    N=N+m;
  }
  printf(" = %f\n\n",N);

}
