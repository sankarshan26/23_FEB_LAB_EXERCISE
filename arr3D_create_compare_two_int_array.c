/* Create one more ID array and compare the two ID arrays for values*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int b,r,c;
    printf("Enter the number of blocks for 3D array : ");scanf("%d",&b);
    printf("\nEnter the number of rows for 3D array : ");scanf("%d",&r);
    printf("\nEnter the number of columns for 3D array : ");scanf("%d",&c);
   int a[b][r][c];

   // taking 3D array as input from user 
   for(int i=0; i<b; i++) // for controling the number of blocks 
      for(int j=0;j<r;j++) // for controling the number of rows
      	for(int k=0;k<c;k++)
          {
              printf("\nEnter value for a[%d][%d][%d] :",i+1,j+1,k+1); 
              scanf("%d",&a[i][j][k]);
          }
    int ar[b][r][c];
    
    printf("\nSecond array");
   // taking another 3D array as input from user 
   for(int i=0; i<b; i++)  
      for(int j=0;j<r;j++) 
      	for(int k=0;k<c;k++)
          {
              printf("\nEnter value for a[%d][%d][%d] :",i+1,j+1,k+1); 
              scanf("%d",&ar[i][j][k]);
          }
    for(int i=0; i<b; i++)  
      for(int j=0;j<r;j++) 
      	for(int k=0;k<c;k++)
    {
        if(a[i][j][k]>ar[i][j][k]) {printf("\nFor position (%d,%d,%d) : 1st Array is grater than 2nd Array ",i+1,j+1,k+1);}
        else if (ar[i][j][k]>a[i][j][k]) {printf("\nFor position (%d,%d,%d) : 2nd Array is grater than 1st Array ",i+1,j+1,k+1);}
        else {printf("\nFor position (%d,%d,%d) : Both arrays have equal value ",i+1,j+1,k+1);}
    }
return 0;
}