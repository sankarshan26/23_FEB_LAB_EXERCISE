//Find the sum of all elements in an array

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
    int a[r][c],sum=0;
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter a[%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("\nSum of all elements of array : %d",sum);
    return 0;
}