#include<stdio.h>
int main()
{
  int n,a,i,sum=0,ncopy;
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  ncopy=n;
  while(n>0)
  {
    i=n%10;
    sum=sum+(i*i*i);
    n=n/10;
  }
  if(sum==ncopy)
  {
    printf("%d IS A ARMSTRONG NUMBER\n",ncopy);
  }
  else
  {
    printf("%d IS NOT A ARMSTRONG NUMBER\n",ncopy);
  }
}
