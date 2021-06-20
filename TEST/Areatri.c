/*
  If the lengths of the three sides of triangle are input through the keyboard,
  write a program to find the area of the triangle.
*/
  #include<stdio.h>
  #include<math.h>
  void main()
  {
    float a,b,c,s,i=0,area;
    printf("ENTER THE VAlUE OF FIRST SIDE: ");
    scanf("%f",&a);
    printf("ENTER THE VAlUE OF SECOND SIDE: ");
    scanf("%f",&b);
    printf("ENTER THE VAlUE OF THIRD SIDE: ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    i=(s*(s-a)*(s-b)*(s-c));
    if(i>0)
    {
      area=sqrt(i);
      printf("AREA OF THE TRIANGLE = %f\n",area);
    }
    else
    {
      printf("invalid\n");
    }
  }
