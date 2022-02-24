/* Find the sum of all elements in an array*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int b,r,c;
    printf("Enter the number of blocks for 3D array : ");scanf("%d",&b);
    printf("\nEnter the number of rows for 3D array : ");scanf("%d",&r);
    printf("\nEnter the number of columns for 3D array : ");scanf("%d",&c);
   int sum=0,a[b][r][c];

   // taking 3D array as input from user 
   for(int i=0; i<b; i++) // for controling the number of blocks 
      for(int j=0;j<r;j++) // for controling the number of rows
      	for(int k=0;k<c;k++)
          {
              printf("\nEnter value for a[%d][%d][%d] :",i+1,j+1,k+1); 
              scanf("%d",&a[i][j][k]);
          }
    // Calculating the sum.
   for(int i=0; i<b; i++) // for controling the number of blocks 
      for(int j=0;j<r;j++) // for controling the number of rows
      	for(int k=0;k<c;k++) // for controling the number of columns
          sum+=a[i][j][k];//adding every element to sum.
   printf("\nSum of elements of 3D array is : %d",sum);
   return 0;
}