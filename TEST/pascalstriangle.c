#include<stdio.h>
int main()
{
  int i,j,row,space,ncr;
  printf("ENTER NUMBER OF ROWS : ");
  scanf("%d",&row);
  for(i=0;i<row;i++)
  {
    for(space=(row-i)-1;space>0;space--)
    {
      printf("\t");
    }
    for(j=0;j<=i;j++)
    {
      if(j==0)
      {
        ncr=1;
        printf("%d",ncr);
        printf("\t\t");
      }
      else
      {
        ncr=ncr*(i-j+1)/j;
        printf("%d",ncr);
        printf("\t\t");
      }
    }
    printf("\n");
  }
}
