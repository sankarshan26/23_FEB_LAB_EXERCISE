// Insert the elements in all the even numbered position of the array
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
            if(((i+j)%2)!=0)    
            //for 3 x 3 matrix
            // index position of 2nd element is (0,1)
            // index position of 4th element is (1,0) 
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