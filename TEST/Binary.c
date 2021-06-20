/*
  Write a program to convert decimal number to its binary equivalent.
*/

#include<stdio.h>
int main()
{
  int a[100],i,ncopy,n;
  do
  {
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    ncopy=n;
    for(i=0;n>=1;i++)
    {
      a[i]=n%2;
      n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
      printf("%d",a[i]);
    }
    printf("\n");

  }
  while(ncopy>0);
}
