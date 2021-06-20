/*
    Write a program to find the absolute value of a number entered through the keyboard(Do not use math functions).
*/
#include<stdio.h>
void main()
{
  float num;
  printf("ENTER THE NUMBER: ");
  scanf("%f",&num);
  if(num<0)
  {
    num=num*-1;
    printf("ABSOLUTE VALUE = %f",num);
  }
  else
  {
    printf("ABSOLUTE VALUE = %f",num);
  }
  printf("\n");
}
