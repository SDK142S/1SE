/*
 Population of a town today is 100000.
 The population has increased steadily at the rate of 10% per year for the last 10 years.
 Write a program to determine the population at the end of each year in the last decade.
*/
#include<stdio.h>
void main()
{
  int year=10,i,population=100000;
  for(i=year;i>0;i--)
  {
    population=(population*100)/(100+10);
    printf("\n%2dth year population is %d\n\n",i,population);
  }
}
