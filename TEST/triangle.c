/*
  If three sides of a triangle are enterd through the keyboard, write a program to check whether the triangle isosceles,
  equilateral or right angled triangle.
*/
  #include<stdio.h>
  void main()
  {
    float a,b,c;
    printf("Enter the value of first side : ");
    scanf("%f",&a);
    printf("Enter the value of second side : ");
    scanf("%f",&b);
    printf("Enter the value of third side : ");
    scanf("%f",&c);
    if(a==b && b==c && c==a)
    {
      printf("The triangle is equilateral\n");
    }
    else if(a==b || b==c || c==a )
    {
        printf("The triangle is isosceles\n");
    }
    else if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a))
    {
        printf("The triangle is right angled\n");
    }
  }
