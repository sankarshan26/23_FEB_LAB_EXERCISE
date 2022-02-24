/*Create one more 2D character array and 
compare the two 2D char arrays for values*/

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
    char a[r][c],d; 
    scanf("%c",&d);
    for (int i=0;i<r;i++)  // taking 1st array,
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter a[%d][%d] : ",i+1,j+1);
            scanf("%c",&a[i][j]);
            scanf("%c",&d);

            ;
        }
    }
    // taking second array
    char b[r][c];
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter b[%d][%d] : ",i+1,j+1);
            scanf("%c",&b[i][j]);
            scanf("%c",&d);
        }
    }
    int x,y;
    // compairing every value stored in both arrays and printing results .
    for (int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    {   x=(int)a[i][j];
        y=(int)b[i][j];
        if(x>y) printf("\nFor element at position (%d,%d) : 1st array has greater value",i+1,j+1);
        else if (y>x) printf("\nFor element at position (%d,%d) : 2nd array has greater value",i+1,j+1);    
        else printf("\nBoth arrays have equal value for position (%d,%d)",i+1,j+1);
    }

    return 0;
}    
