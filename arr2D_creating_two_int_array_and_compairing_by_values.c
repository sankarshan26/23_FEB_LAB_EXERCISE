//Create one more 2D array and compare the two 2D arrays for values.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    printf("\nDimensions of both arrays must be same");
    printf("\nEnter the number or rows :");
    int r,c;
    scanf("%d",&r);
    printf("\nEnter the number of columns :");
    scanf("%d",&c);
    int a[r][c];  
    for (int i=0;i<r;i++)  // taking 1st array,
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
            ;
        }
    }
    // taking second array
    int b[r][c];
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter b[%d][%d] : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    // cmpairing every value stored in both arrays and printing results .
    for (int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    {
        if(a[i][j]>b[i][j]) printf("\nFor element at position (%d,%d) : 1st array has greater value",i+1,j+1);
        else if (a[i][j]<b[i][j]) printf("\nFor element at position (%d,%d) : 2nd array has greater value",i+1,j+1);    
        else printf("\nBoth arrays have equal value for position (%d,%d)",i+1,j+1);
    }
    return 0;
}    

