/*
  Write a program to print the multiplication table (up to 20) of the number entered by the user. The table should be displayed in the following form
  1 x 9 = 9
  2 x 9 = 18
  3 x 9 = 27
  …
  20 x 9 = 180
*/
  #include<stdio.h>
  void main()
  {
    int n,i,M=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=20;i++)
    {
      M=(i*n);
      printf("%2d * %d = %d \n",i,n,M);
    }
    printf("\n");
  }
