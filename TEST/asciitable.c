#include<stdio.h>
int main()
{
  char a;
  int i=0;
  a=0;
  printf("\n    *********** ASCII TABLE ***********\n");
  for(i=0;i<128;i++)
  {
    printf("%3d : %c\n",a,a);
    a++;
  }
}
