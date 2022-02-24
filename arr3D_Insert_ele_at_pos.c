/* Insert the given number of elements into the specified position of 
the array such as first, last, mid*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int b,r,c;
    printf("Enter the number of blocks for 3D array : ");scanf("%d",&b);
    printf("\nEnter the number of rows for 3D array : ");scanf("%d",&r);
    printf("\nEnter the number of columns for 3D array : ");scanf("%d",&c);
   int a[b+1][r+1][c+1];

   // taking 3D array as input from user 
   for(int i=0; i<b; i++) // for controling the number of blocks 
      for(int j=0;j<r;j++) // for controling the number of rows
      	for(int k=0;k<c;k++)
          {
              printf("\nEnter value for a[%d][%d][%d] :",i,j,k); 
              scanf("%d",&a[i][j][k]);
          }
    // taking position and element.
    int b1,c1,r1,e;
    printf("\nEnter the block number:");scanf("%d",&b1);
    printf("\nEnter the row number:");scanf("%d",&r1);
    printf("\nEnter the column number:");scanf("%d",&c1);
    printf("\nEnter the element :");scanf("%d",&e);

int x=a[b1][r1][c1],y;
     for(int i=b1; i<b; i++) 
      for(int j=r1;j<r;j++) 
      for(int k=c1;k<c;k++)
      {   y=a[i+1][1+j][k+1];
          if((i==b1)&&(j==r1)&&(k==c1))
          {
              a[i][j][k]=e;
              
          }
          a[i+1][1+j][k+1]=x;
          x=y;
          if ((i==b-1)&&(j==r-1)&&(k==c-1))
          { a[i+1][1+j][k+1]=x;}
      }
// displaying
 
for(int i=0; i<b; i++) 
      {for(int j=0;j<r;j++) 
      {for(int k=0;k<c;k++)
          {
             printf("%d ",a[i][j][k]);
             if ((i==b-1)&&(j==r-1)&&(k==c-1))
             {printf("\t");printf("\n");printf("%d ",a[i][j][k]);}
          }
          printf("\t");
        } printf("\n");}
    return 0;
}     