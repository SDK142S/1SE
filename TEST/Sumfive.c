/*
  If a five_digit positive integer is entered through the keyboard ,Write a program to calculate the sum of its digits.
  Display an error message if the number entered is not a valid five digit number.
*/

#include<stdio.h>
void main()
{
  int num,r,sum=0;
  printf("ENTER THE FIVE DIGIT NUMBER: ");
  scanf("%d",&num);
  if(num <= 9999)
  {
     printf("invalid number\n");
  }
  else if (100000 <= num)
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
