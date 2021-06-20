/*
    Given a point(x,y)of the centre of a circle and its radius,
    write a program that will determine whether a point lies inside the circle, on the circle or outside the circle.
*/
  #include<stdio.h>
  void main()
  {
    int x,y,r,a,b;
    printf("Enter the values of x-coordinate and y-coordinate : ");
    scanf("%d%d",&x,&y);
    printf("Enter the value of radius: ");
    scanf("%d",&r);
    a=(x^2)+(y^2);
    b=(r^2);
    if(a>b)
    {
      printf("The points lies outside the circle");
    }
    else if(a<b)
    {
        printf("The points lies inside the circle");
    }
    else
    {
        printf("The points lies on the circle");
    }
    printf("\n");
  }
