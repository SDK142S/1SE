#include<stdio.h>
void main()
{
  int count=0,a,num,i=1;
  printf("Enter the number: ");
  scanf("%d",&num);
  while(i<=num)
  {
    a=num%i;
    if(a==0)
   {
      count=count+1;
   }
   i++;
  }
  if(count==2)
  {
    printf("%d is a prime number",num);
  }
  else
  {
    printf("%d is not a prime number",num);
  }
  printf("\n");
}
