#include<stdio.h>
void main()
{
  int a[10][10],i,j,m,n;
  printf("Enter the order of the matrix : ");
  scanf("%d%d",&m,&n);
  printf("Enter the numbers in the matrix : ");
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

  //TRANSPOSE OF MATRIX

  printf("Transpose of the matrix : \n");
  for(j=0;j<n;j++)
  {
     for(i=0;i<m;i++)
     {
        printf("%d\t",a[i][j]);
     }
     printf("\n");
  }

}
