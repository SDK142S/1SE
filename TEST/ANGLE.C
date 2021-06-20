/*
    Write a program to check whether the triangle is valid or not,when the three angles of a triangle are entered through the keyboard.
    A triangle is valid if the sum of all the three angles is equal to 180 degrees.
*/
  #include<stdio.h>
  int main()
  {
    float a,b,c,sum=0;
    printf("\nENTER THE VALUE OF FIRST ANGLE: ");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF SECOND ANGLE: ");
    scanf("%f",&b);
    printf("ENTER THE VALUE OF THIRD ANGLE: ");
    scanf("%f",&c);
    sum=a+b+c;
    if(sum>180)
    {
      printf(" THE TRANGLE IS INVALID\n\n");
    }
    else if(sum<180)
    {
      printf(" THE TRIANGLE IS INVALID\n\n");
    }
    else
    {
      printf("THE TRIANGLE IS VALID\n\n");
    }
  }
