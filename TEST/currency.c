/*
  Consider  currency system in by which there are notes of seven denominations,namely Rs.1,Rs.2,Rs.5,Rs.10,Rs.50 and Rs.100.
  If a sum of RS.N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give RS.N
*/
  #include<stdio.h>
  void main()
  {
    int i,N;
    printf("RS: ");
    scanf("%d",&N);
    if(N>=100)
    {
      i=N/100;
      N=N%100;
      printf("%d * 100 \n",i);
    }
    if(N>=50)
    {
      i=N/50;
      N=N%50;
      printf("%d * 50 \n",i);
    }
    if(N>=10)
    {
      i=N/10;
      N=N%10;
      printf("%d * 10 \n",i);
    }
    if(N>=5)
    {
      i=N/5;
      N=N%5;
      printf("%d * 5 \n",i);
    }
    if(N>=2)
    {
      i=N/2;
      N=N%2;
      printf("%d * 2 \n",i);
    }
    if(N>=1)
    {
      i=N/1;
      N=N%1;
      printf("%d * 1 \n",i);
    }

  }
