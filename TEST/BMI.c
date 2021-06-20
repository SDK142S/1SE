//Body mass index (BMI)

#include<stdio.h>
void main()
{
  float weight,height,bmi;
  printf("Weight(kg): ");
  scanf("%f",&weight);
  printf("Height(m): ");
  scanf("%f",&height);
  bmi=(weight/(height*height));
  printf("BMI = %f\n",bmi);
  if(bmi<=15)
  {
    printf("Starvation\n");
  }
  else if(15<bmi && bmi<17.6)
  {
    printf("Anorexic\n");
  }
  else if(17.5<bmi && bmi<18.6)
  {
    printf("Underweight\n");
  }
  else if(18.5<bmi && bmi<25)
  {
    printf("Ideal\n");
  }
  else if(24.9<bmi && bmi<30)
  {
    printf("Overweight\n");
  }
  else if(29.9<bmi && bmi<40)
  {
    printf("Obese\n");
  }
  else
  {
    printf("Morbidly Obese\n");
  }
}
