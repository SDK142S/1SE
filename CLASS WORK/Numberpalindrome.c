#include<stdio.h>
void main()
{
  int n,i,ncopy,sum=0;
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  ncopy=n;
  while(n>0)
  {
    i=n%10;
    sum=(sum*10)+i;
    n=n/10;
  }
  if(ncopy==sum)
  {
    printf("THE NUMBER IS PALINDROME\n");
  }
  else
  {
    printf("THE NUMBER IS NOT PALINDROME\n");
  }

}
