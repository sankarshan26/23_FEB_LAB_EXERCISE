
//Check whether the array has non zero values in a position

#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int a[5];
    printf("\nEnter an array of 5 integers ");
    for (int i=0;i<5;i++)
    {
       printf("\nEnter %d element of array :",i+1);
       scanf("%d",&a[i]); 
    }

    // checking for zero values in array and printing there position .
    int c=0;
    for (int i=0;i<5;i++)
    {
        if (a[i]==0)
        {printf("\n %d position has zero value",i+1);
         c=1;}
    }
    if (c==0) {printf("\nAll elements of array have non zero value");}
    return 0;
}