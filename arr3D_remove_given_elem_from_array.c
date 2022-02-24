/* Remove the given number of elements from the array */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int b,r,c;
    printf("Enter the number of blocks for 3D array : ");scanf("%d",&b);
    printf("\nEnter the number of rows for 3D array : ");scanf("%d",&r);
    printf("\nEnter the number of columns for 3D array : ");scanf("%d",&c);
   int a[b][r][c],e;

   // taking 3D array as input from user 
   for(int i=0; i<b; i++) // for controling the number of blocks 
      for(int j=0;j<r;j++) // for controling the number of rows
      	for(int k=0;k<c;k++)
          {
              printf("\nEnter value for a[%d][%d][%d] :",i+1,j+1,k+1); 
              scanf("%d",&a[i][j][k]);
          }

   // taking  element to be removed.
   printf("\nEnter the element to be removed :");scanf("%d",&e);
   
    // at given position replacing value as 0 and while priting inorder to specify the position 
    // underscore will be printed.
   for(int i=0; i<b; i++) 
      {for(int j=0;j<r;j++) 
      {for(int k=0;k<c;k++)
          {
              if(a[i][j][k]==e)
              { a[i][j][k]=0;
              printf("_ ");
              }
              else printf("%d ",a[i][j][k]);
          }
          printf("\t");
        } printf("\n");}
    return 0;
}