/*
  If a character is entered through the keyboard,
  write a program to determine whether the character is a capital letter,small letter,a digit or special symbols.
*/

 #include<stdio.h>
 int main()
 {
   char a;
   printf("Enter the character : ");
   scanf("%c",&a);
   if(a>=65 && a<=90)
   {
     printf("%c is a capital letter\n",a);
   }
   else if(a>=97 && a<=122)
   {
     printf("%c is small letter\n",a);
   }
   else if(a>=48 && a<=57)
   {
     printf("%c is a digit\n",a);
   }
   else
   {
     printf("%c is special symbols\n",a);
   }
 }
