
//Check whether the array has non zero values in a position

#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int n,e;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];

    for (int i=0;i<n;i++)
    {
       printf("\nEnter %d element of array :",i+1);
       scanf("%d",&a[i]); 
    }

    printf("\nEnter the element whose position you want to search :");
    scanf("%d",&e);
    printf("\nPostion of searched elemnt is/are :");
    int c=0;
    for ( int i=0; i<n; i++)
    { if (a[i]==e){printf(" %d",i+1);c=1;}
    }
    if (c==0)  {printf("\nElement not found in the string");}
    return 0;

}