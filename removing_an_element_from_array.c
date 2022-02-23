// Remove one element from the array 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,e;
    system("cls");
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter %d element of the array ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter the element to be removed from array :");
    scanf("%d",&e);

    int c=0; // counter variable.

    for(int j=0;j<n;j++)
    {
        if (a[j]==e) 
        {
            for (int k=j;k<n-1;k++)
            {a[k]=a[k+1];
            }
            n=n-1;
            j--;
        }
        
    }

    // displaying 
    printf("\nUpdated Array :");
    for (int i=0;i<n;i++)
    { printf("%d ",a[i]);}
    return 0;
}