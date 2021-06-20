//MATRIX ADDITION

#include<stdio.h>
int main()
{
  int i=0,j=0,a[10][10],b[10][10],sum[10][10],m,n;
  printf("ENTER THE ORDER OF MATRIX A AND B : ");
  scanf("%d%d",&m,&n);

  //FIRST MATRIX

  printf("ENTER THE NUMBERS IN FIRST MATRIX: ");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  //SECOND MATRIX

  printf("ENTER THE NUMBERS IN SECOND MATRIX: ");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  //SUM OF MATRICES

  printf("\nSUM OF TWO MATRICES = \n\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      sum[i][j]=a[i][j]+b[i][j];
      printf("%d\t",sum[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
