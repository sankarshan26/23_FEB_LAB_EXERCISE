//Search the given element in the array and print it's position.
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

    int e,count=0;
    printf("\nEnter the element to be searched : ");
    scanf("%d",&e);
    for (int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    if (a[i][j]==e) { printf("\nPostion of %d in array is %d row and %d column",e,i+1,j+1);
     count=1;}

    if (count==0) printf("\n%d is not present in array.");
    return 0;        

}