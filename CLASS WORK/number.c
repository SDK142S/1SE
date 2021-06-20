#include<stdio.h>
void main()
{
  int n,m,p;
  printf("Enter two number: ");
  scanf("%d%d",&n,&p);
  m=n;
  if(m<=p)
  {
    while(m <= p)
    {
      printf("%d\t",m);
      m=m+1;
    }
  }
  else
  {
    printf("first number should be less than second number");
  }

  printf("\n");
}
