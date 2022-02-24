/* Create one more ID character array and compare the two ID char arrays for values*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int b,r,c;
    printf("Enter the number of blocks for 3D array : ");scanf("%d",&b);
    printf("\nEnter the number of rows for 3D array : ");scanf("%d",&r);
    printf("\nEnter the number of columns for 3D array : ");scanf("%d",&c);
   char a[b][r][c],d;
   scanf("%c",&d);

   // taking 3D array as input from user 
   for(int i=0; i<b; i++) // for controling the number of blocks 
      for(int j=0;j<r;j++) // for controling the number of rows
      	for(int k=0;k<c;k++)
          {
              printf("\nEnter value for a[%d][%d][%d] :",i+1,j+1,k+1); 
              scanf("%c",&a[i][j][k]);
              scanf("%c",&d);
          }
    printf("\nSecond Array");
    char ar[b][r][c];
    for(int i=0; i<b; i++)  
      for(int j=0;j<r;j++)
      	for(int k=0;k<c;k++)
          {
              printf("\nEnter value for a[%d][%d][%d] :",i+1,j+1,k+1); 
              scanf("%c",&ar[i][j][k]);
              scanf("%c",&d);
          }

    // Compairing every value.
    for(int i=0; i<b; i++)  
      for(int j=0;j<r;j++)
      	for(int k=0;k<c;k++)
    {
         if((int)a[i][j][k]>(int)ar[i][j][k]) {printf("\nFor position (%d,%d,%d) : 1st Array is grater than 2nd Array ",i+1,j+1,k+1);}
        else if ((int)ar[i][j][k]>(int)a[i][j][k]) {printf("\nFor position (%d,%d,%d) : 2nd Array is grater than 1st Array ",i+1,j+1,k+1);}
        else {printf("\nFor position (%d,%d,%d) : Both arrays have equal value ",i+1,j+1,k+1);}
    }
    return 0;
}
