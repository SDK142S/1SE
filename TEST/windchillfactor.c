#include<stdio.h>
#include<math.h>
void main()
{
  //v:velocity,t:temperature,wcf:wind chill factor
  float v,t,wcf;
  printf("Enter the value of velocity : ");
  scanf("%f",&v);
  printf("Enter the value of temperature : ");
  scanf("%f",&t);
  wcf=35.74+(0.62151*t)+((0.4275*t)-35.75)*pow(v,0.16);
  printf("wind chill factor = %f\n",wcf);

}
