/*
    If a five_digit positive integer is entered through the keyboard,write a program to reverse the number.
    Display an error message if the number entered is not a valid five digit number.
*/

#include<stdio.h>
int main()
{
  int num,r,sum=0;
  printf("ENTER THE FIVE DIGIT NUMBER: ");
  scanf("%d",&num);
  if(num <= 9999)
  {
     printf("Invalid number\n");
  }
  else if (100000 <= num)
  {
      printf("Invalid number\n");
  }
  else
  {
      while(num > 0)
      {
          r=num%10;
          sum=(sum*10)+r;
          num=num/10;
      }
      printf("REVERSE OF THE NUMBER IS %d\n",sum);
  }
}
