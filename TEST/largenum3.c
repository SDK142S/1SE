/*
     Using the Conditional operator, write a program to determine the largest among three numbers.
*/

#include<stdio.h>
void main()
{
  int a,b,c,N,X;
  printf("Enter the three numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  N=(a>b)?a:b;
  X=(N>c)?N:c;
  printf("%d is the largest number\n",X);
}
