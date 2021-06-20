#include<stdio.h>
void main()
{
  int a=0,b=1,c,n,i;
  printf("Enter the number: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;
  }
}
