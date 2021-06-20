#include<stdio.h>
void main()
{
  int i,n,m=0,k,count=0;
  float j;
  printf("ENTER THE NUMBER : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=(n-i);j++)
    {
      printf(" ");
    }
    for(count=1;count<=i;count++)
    {
        printf("*");
        printf(" ");
    }
    printf("\n");
  }


}
