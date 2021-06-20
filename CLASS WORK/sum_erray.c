#include<stdio.h>
void main()
{
  int i,sum=0,a[100],n;
  printf("ENTER THE NUMBER (should be less than 100): ");
  scanf("%d",&n);
  if(n <= 100)
  {
    printf("enter the %d numbers: ",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
    printf("sum of the number = %d",sum);
  }
  else
  {
    printf("ENTER THE NUMBER SHOULD BE LESS THAN 100");
  }
  printf("\n");
}
