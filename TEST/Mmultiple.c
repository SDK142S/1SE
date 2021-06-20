#include<stdio.h>
int main()
{
  int a[30][30],b[30][30],row1,column1,i,j,p,q,row2,column2,c[30][30];
  printf("ENTER THE ORDER OF THE FIRST MATRIX :");
  scanf("%d%d",&row1,&column1);
  printf("ENTER THE ORDER OF THE SECOND MATRIX :");
  scanf("%d%d",&row2,&column2);

  //FIRST MATRIX

  printf("ENTER THE NUMBERS IN THE FIRST MATRIX :");
  for(i=0;i<row1;i++)
  {
    for(j=0;j<column1;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }

  // SECOND MATRIX

  printf("ENTER THE NUMBERS IN THE SECOND MATRIX :");
  for(p=0;p<row2;p++)
  {
    for(q=0;q<column2;q++)
    {
      scanf("%d",&b[p][q]);
    }
  }
  printf("\n");

  // PRINT FIRST MATRIX

  printf("FIRST MATRIX: \n");
  for(i=0;i<row1;i++)
  {
    for(j=0;j<column1;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  // PRINT SECOND MATRIX

  printf("SECOND MATRIX: \n");
  for(p=0;p<row2;p++)
  {
    for(q=0;q<column2;q++)
    {
      printf("%d\t",b[p][q]);
    }
    printf("\n");
  }
  printf("\n");

  //MULTIPLICATION OF TWO MATRICES

  for(i=0;i<row1;i++)
  {
    for(q=0;q<column2;q++)
    {
      c[i][q]=0;
      for(j=0,p=0;j<column2,p<row2;j++,p++)
      {
        c[i][q] = c[i][q] + (a[i][j]*b[p][q]);
      }
    }
  }
  // PRODUCT MATRIX
  printf("      ******** MULTIPLICATION OF TWO MATRICES ********\n\n");
  for(i=0;i<row1;i++)
  {
    for(q=0;q<column2;q++)
    {
      printf("%d\t",c[i][q]);
    }
    printf("\n");
  }
  printf("\n");
}
