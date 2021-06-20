/*
      If the cost price and selling price of an item are input through the keyboard,
      write a program to determine whether the seller has made profit or incurred loss.
      Also determine how much profit he made or loss he incurred.
*/
  #include<stdio.h>
  void main()
  {
      float CP,SP,profit,loss,i=0;
      printf(" COST PRICE: ");
      scanf("%f",&CP);
      printf("SELLING PRICE: ");
      scanf("%f",&SP);
      i=SP-CP;
      if(i>0)
      {
        printf("THE SELLER HAS MADE PROFIT\n");
        printf("PROFIT = %f",i);
      }
      else if(i<0)
      {
          printf("THE SELLER HAS MADE INCURRED LOSS\n");
          printf("INCURRED LOSS = %f",i);
      }
      else
      {
        printf("NO PROFIT AND NO INCURRED loss");
      }
      printf("\n\n");
  }
