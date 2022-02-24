// Insert the elements in all the odd numbered position of the array
#include<stdlib.h>
#include<stdio.h>

int main()
{
    system("cls");
    int n,m;
    printf("\nEnter the number of rows of 2-D array : ");
    scanf("%d",&n);
    printf("\nEnter the number of columns of 2-D array : ");
    scanf("%d",&m);
    int a[n][m] ;

    //taking values at odd position and specifying 
    //even position value as zero in 2-D array

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(((i+j)%2)==0)    // index position of 1st element is (0,0)
                             // index position of 3rd element is (0,2) 
            { printf("\nEnter the value for 2-D array a[%d][%d] ",i,j);
             scanf("%d",&a[i][j]); }

            else { a[i][j]=0;}
        }
    }
    printf("\n");
    
    // displaying values.
    for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }

    return 0;
}