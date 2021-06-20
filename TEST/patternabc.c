#include<stdio.h>
void main()
{
  char m='A';
  int n,i,count=0;
  printf("N: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    m='A';
    for(count=0;count<=i;count++)
    {
        printf("%c\t",m);
        m=m+1;
    }
    printf("\n");

  }
}
