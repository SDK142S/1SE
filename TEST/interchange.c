/*
  Write a prgram to accept two numbers and place them in two variables a and b.
  Interchange thier values and display the result.
*/
 #include<stdio.h>
 void main()
 {
    int a,b,acopy;
    printf("\na = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    acopy=a;
    a=b;
    b=acopy;
    printf("a = %d\n",a);
    printf("b = %d\n\n",b);

 }
