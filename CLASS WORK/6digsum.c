#include<stdio.h>
void main()
{
  int num,r,sum=0;
  printf("ENTER THE SIX DIGIT NUMBER: ");
  scanf("%d",&num);
  if(num <= 99999)
  {
     printf("invalid number\n");
  }
  else if (1000000 <= num)
  {
      printf("invalid number\n");
  }
  else
  {
      while(num > 0)
      {
          r=num%10;
          sum=sum+r;
          num=num/10;
      }
      printf("%d is the sum of the digits\n",sum);

  }
}
