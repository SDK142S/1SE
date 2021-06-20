#include<stdio.h>
void main()
{
  float a,b,s,c,d,m;
  printf("Enter two number: ");
  scanf("%f%f",&a,&b);
  s=a+b;
  printf("%f + %f = %f\n",a,b,s);
  c=a-b;
  printf("%f - %f = %f\n",a,b,c);
  d=a/b;
  printf("%f / %f = %f\n",a,b,d);
  m=a*b;
  printf("%f * %f = %f\n",a,b,m);
}
