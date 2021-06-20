/*Given three points (x1,y1),(x2,y2) and (x3,y3),write a program to check if all the three points fall on one staright line*/

#include<stdio.h>
void main()
{
  float x1,x2,x3,y1,y2,y3,m,n;
  printf("Enter the values of x1 and y1 : ");
  scanf("%f%f",&x1,&y1);
  printf("Enter the values of x2 and y2 : ");
  scanf("%f%f",&x2,&y2);
  printf("Enter the values of x3 and y3 : ");
  scanf("%f%f",&x3,&y3);

  //Slope of points (x1, y1) and (x2, y2)
  m=((y2-y1)-(x2-x1));
  //Slope of points (x3, y3) and (x2, y2)
  n=((y3-y2)-(x3-x2));

  if(m==n)
  {
    printf("All 3 points lie on the same straight line\n");
  }
  else
  {
    printf("All 3 points do not lie on the same straight line \n");
  }
}
