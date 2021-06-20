/*
 Write a program to enter numbers till the user wants. At the end, it should display the count of positive, negative and zeros entered.

*/


#include<stdio.h>
void main()
{
  int n,i,negative=0,positive=0,zero=0,a[50];
  printf("Enter the count: ");
  scanf("%d",&n);
  printf("Enter the numbers: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      zero++;
    }
    else if(a[i]>0)
    {
      positive++;
    }
    else
    {
      negative++;
    }
  }
  printf("Count of negative numbers = %d\n",negative);
  printf("Count of positive numbers = %d\n",positive);
  printf("Count of zeros = %d\n",zero);

}
