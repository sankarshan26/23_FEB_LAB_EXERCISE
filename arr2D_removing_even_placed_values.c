/* Remove the elements from all the even numbered position of the array*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int n,m;
    printf("\nEnter the number of rows of 2-D array : ");
    scanf("%d",&n);
    printf("\nEnter the number of columns of 2-D array : ");
    scanf("%d",&m);
    int a[n][m] ;

    for(int i=0;i<n;i++)
    for(int j=0; j<m;j++)
    {
        printf("\nEnter the value for a[%d][%d]: ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
     // displaying the array entered by user.
    printf("Your Array\n");
    for(int i=0;i<n;i++)
    {for(int j=0; j<m;j++)
    {
         printf("%d ",a[i][j]);
    }printf("\n");}

    // removing value at odd position and replacing it by zero.
    int c=1;
    for(int i=0;i<n;i++)
    for(int j=0; j<m;j++)
    {
         if(c==-1)
         {
             a[i][j]=0;
             
         }   c=c*(-1);     
    }
   

// printing Updated  array and inplace of zero we will display _
    printf("\nUPDATED ARRAY\n");
    c=1;
    for(int i=0;i<n;i++)
    {for(int j=0; j<m;j++)
    {
        if(c==-1)
         {
             printf("_ ");
             c=c*(-1);
         }        
        else {printf("%d ",a[i][j]);c=c*(-1);}
    }
    printf("\n");
    }
return 0;
}