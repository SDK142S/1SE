//Numbers divisible by 11 between 100 and 500

 #include<stdio.h>
 void main()
 {
   int n1=110,n2=495,n;
   n=n1;
   while( n <= n2)
   {
     if(n%11 == 0)
     {
       printf("%d\n",n);
       n=n+11;
      }
   }
 } 
