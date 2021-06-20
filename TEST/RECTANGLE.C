/*
  Given the length and breadth of a rectangle,write a program to find whether the area of the rectangle is greater than its perimeter.
*/
#include<stdio.h>
int main()
{
  float l,b,area=0,perimeter=0;
  printf("\nENTER THE VALUE OF LENGTH: ");
  scanf("%f",&l);
  printf("ENTER THE VALUE OF BREADTH: ");
  scanf("%f",&b);
  perimeter=2*(l+b);
  area=l*b;
  if(area>perimeter)
  {
    printf("AREA OF THE RECTANGLE IS GREATER THAN ITS PERIMETER\n\n");
  }
  else if(area<perimeter)
  {
    printf("AREA OF THE RECTANGLE IS LESS THAN ITS PERIMETER\n\n");
  }
  else
  {
    printf("AREA OF THE RECTANGLE IS EQUAL TO ITS PERIMETER\n\n");
  }

}
