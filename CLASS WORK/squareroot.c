#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c,d;
  float r1,r2,squareroot;
  printf("enter the values of a,b,c: ");
  scanf("%d%d%d",&a,&b,&c);
  d=(b*b)-(4*a*c);
  if(d==0)
  {
    printf("both roots are equal\n");
    r1=-b/(2*a);
    r2=-b/(2*a);
    printf("root one =%f and root two =%f\n",r1,r2);
  }
  else if(d>0)
  {
    printf("both roots are real and distict\n");
    squareroot=sqrt(d);
    r1=(-b+squareroot)/(2*a);
    r2=(-b-squareroot)/(2*a);
    printf("root one =%f\n",r1);
    printf("root two =%f\n",r2);
  }
  else
  {
    printf("both roots are imaginary\n");
  }

}
