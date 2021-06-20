//check prime or not
#include<stdio.h>
void main()
{
  int i,flag=0,n;
  printf("Enter the number: ");
  scanf("%d",&n);
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
    printf(" prime");
  }
  else
  {
    printf("not prime");
  }
  printf("\n");
}
