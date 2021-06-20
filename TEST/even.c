#include<stdio.h>
int main()
{
  int num;
  printf("ENTER THE NUMBER: ");
  scanf("%d",&num);
  if(num%2==0)
  {
    printf("%d IS AN EVEN NUMBER\n",num);
  }
  else
  {
    printf("%d IS NOT AN EVEN NUMBER\n",num);
  }
}
