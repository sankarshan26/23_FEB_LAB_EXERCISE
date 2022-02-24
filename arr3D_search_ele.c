/* Search the given element in the array and print it's position*/
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
    printf("\nEnter the element to be searched :");scanf("%d",&e); // taking element
    int x;
    for(int i=0; i<b; i++) // for controling the number of blocks 
      for(int j=0;j<r;j++) // for controling the number of rows
      	for(int k=0;k<c;k++)
          {
              if(a[i][j][k]==e){ x=1;printf("\n%d is found at position (%d,%d,%d).",e,i+1,j+1,k+1);}
          }
    if (x==0) printf("\n%d is not present in the array.");
    return 0;

}