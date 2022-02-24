//Check whether the array has non zero values in a position
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    printf("\nEnter the number or rows :");
    int r,c;
    scanf("%d",&r);
    printf("\nEnter the number of columns :");
    scanf("%d",&c);
    int a[r][c];

    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    //
    int count=0;
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if (a[i][j]!=0) 
            {printf("\nPosition of non-zero values : %d and %d column.",i+1,j+1);
             count+=1; }

        }

    }
    if (count==0) { printf("\nAll values are zero");}
    else {printf("\nTotal %d non-zero values.",count);}
return 0;
}