#include<stdio.h>
void main()
{
  int i,sum=0,a[100],n;
  printf("ENTER THE NUMBER (should be less than or equal to 100): ");
  scanf("%d",&n);
  if(n <= 100)
  {
    printf("enter the %d numbers: ",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
      printf("%d\t",a[i]);
    }
  }
  else
  {
    printf("ENTER THE NUMBER SHOULD BE LESS THAN 100");
  }
  printf("\n");
}
