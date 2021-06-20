#include<stdio.h>
void main()
{
  float mat,phy,che,sum,n,prt;
  printf("Enter the mark obtained in maths exam: ");
  scanf("%f",&mat);
  printf("Enter the mark obtained in physics exam: ");
  scanf("%f",&phy);
  printf("Enter the mark obtained in chemistry exam: ");
  scanf("%f",&che);
  sum=mat+phy+che;
  n=sum/300;
  prt=n*100;
  printf("%f percentage\n\n",prt);
  if(80 <= prt)
  {
    printf("Distinction\n\n");
  }
  else if(60 <= prt)
  {
    printf("First class\n\n");
  }
  else if(50 <= prt)
  {
    printf("Second class\n\n");
  }
  else if(40 <= prt)
  {
    printf("Third class\n\n");
  }
  else
  {
    printf("Fail\n\n");
  }
}
