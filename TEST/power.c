/*
 Two numbers are entered through the keyboard.
 Write a program to find the value of one number raised to the power of the other.

*/
#include<stdio.h>
#include<math.h>
int main()
{
  int a,b;
  float n=0;
  printf("Enter the first number : ");
  scanf("%d",&a);
  printf("Enter the second number : ");
  scanf("%d",&b);
  n=pow(a,b);
  printf("%d is the power of %d is %f\n",a,b,n);

}
