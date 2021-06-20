#include <stdio.h>
void main()
{
  int n,i=1,fact=0;
  printf("Enter the number: ");
  scanf("%d",&n);
  while(i <= n)
  {
    fact=fact+i;
    i++;
  }
  printf("Sum of the numbers from 1 to %d  = %d\n",n,fact);
}
