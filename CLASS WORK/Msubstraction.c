#include<stdio.h>
void main()
{
  int i,j,m,n,a[10][10],b[10][10],sub[10][10];
  printf("ENTER THE ORDER OF THE MATRIX A AND B : ");
  scanf("%d%d",&m,&n);

  //FIRST MATRIX
  printf("ENTER THE NUMBERS IN FIRST MATRIX : ");
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

  //SECOND MATRIX
  printf("ENTER THE NUMBERS IN SECOND MATRIX : ");
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

  // SUBSTRACTION OF TWO MATRICES
  printf("SUBSTRACTION OF TWO MATRICES: \n");
  for(i=0;i<m;i++)
  {
     for(j=0;j<n;j++)
      {
        sub[i][j]=a[i][j]-b[i][j];
        printf("%d\t",sub[i][j]);
      }
      printf("\n");
  }
  printf("\n");



}
