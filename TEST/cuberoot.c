/*
  Write a program to find the cube root of an integer.
  If the input is not a perfect cube,display the number is not a perfect cube.
*/

  #include<stdio.h>
  #include<math.h>
  void main()
  {
    int num,a,i;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    a=cbrt(num);
    i=(a*a*a);
    if(num==i)
    {
      printf("CUBE ROOT OF %d = %d\n",num,a);
      printf("%d IS A PERFECT CUBE\n",num);
    }
    else
    {
      printf("%d IS NOT A PERFECT CUBE\n",num);
    }
  }
