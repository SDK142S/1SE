#include<stdio.h>
void main()
{
  int n,fact,sum=0;
  printf("Enter the number: ");
  scanf("%d",&n);
  fact=1;
  while(fact < n)
  {
    if(n%fact == 0)
    {
      sum=sum+fact;
    }
    fact=fact+1;
  }
  if(n == sum)
  {
    printf("%d is a perfect number\n",n);
  }
  else
  {
    printf("%d is not a perfect number\n",n);
  }
}
