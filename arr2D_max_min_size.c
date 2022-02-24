//Find the maximum elements in an array
 //Find the minimum elements in an array

 #include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    printf("\nEnter the number or rows for 1st array :");
    int r,c;
    scanf("%d",&r);
    printf("\nEnter the number of columns for 1st array :");
    scanf("%d",&c);
    int a[r][c],count=0;

    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
            count=count+1;
        }
    }
    // for second array

    printf("\nEnter the number or rows for 2nd array:");
    scanf("%d",&r);
    printf("\nEnter the number of columns for 2nd array:");
    scanf("%d",&c);
    int b[r][c],count2=0;

    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter b[%d][%d] : ",i+1,j+1);
            scanf("%d",&b[i][j]);
            count2=count2+1;
        }
    }

    if (count>count2) printf("\nGreater array is : first array.");
    else if (count==count2) printf("\nBoth arrays are equal.");
    else printf("\nGreater array is : Second array");
    return 0;
}