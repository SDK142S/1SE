#include<stdio.h>
#include<string.h>
void main()
{
  char a[10];
  printf("ENTER THE PASSWORD: ");
  scanf("%s",a);
  strcmp(a,"XXXX");
  if(strcmp(a,"XXXX")==0)
  {
    printf("\n\n       ********** WELCOME **********\n\n");
  }
  else
  {
    printf("\nINVALID PASSWORD\n");
  }
}
