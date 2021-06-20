#include<stdio.h>
void main()
{
  int n,i,j,count=1;
  printf("Enter the number : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=(n-i);j>=0;j--)
    {
      printf(" ");
    }
    for(count=1;count<=(2*i-1);count++)
    {
      if(count==1 && i!=n )
      {
        printf("*");
      }
      else if(count==(2*i-1) && i!=n)
      {
        printf("*");
      }
      else if(count==(2*i-1) && i==n)
      {
        for(count=1;count<=(2*i-1);count++)
        {
          printf("*");
        }
      }
      else if(i!=n)
      {
        printf(" ");
      }

    }
    printf("\n");
  }
}
