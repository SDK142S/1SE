/*
  Given a point (x,y) write a program to find out if it lies on the X-axis,Y-axis or on the origin.
*/
#include<stdio.h>
void main()
{
  int x,y;
  printf("Enter the values of x-coordinate and y-coordinate : ");
  scanf("%d%d",&x,&y);
  if(x==0 && y>0)
  {
    printf("Point lies on Y-axis\n");
  }
  else if(x>0 && y==0)
  {
      printf("Point lies on X-axis\n");
  }
  else if(x==0 && y==0)
  {
      printf("Point lies on origin\n");
  }
  else
  {
    printf("Point neither lies on X-axis nor on Y-axis\n");
  }

}
