// Remove the duplicate elements in an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int n; // k is used to count the number of times duplicate values are removed.
    printf("Enter the number of elements of array :");
    scanf("%d",&n);
    int a[n]; // creating an integer array
    printf("\nEnter the elements of array (remember to enter at least one duplicate element) ");
    for (int i=0;i<n;i++)
    {
        printf("\nEnter %d element of array : ",i+1);
        scanf("%d",&a[i]);
    }

    //removing duplicate elements.
    for (int i=0;i<n;i++)
    { 
        for (int j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            { 
                for(int k=j;k<n-1;k++)
                { a[k]=a[k+1];}

                n=n-1; // decreasing size of array if position of element changes
                j--; // when position of element changes we should not increase the value of j.
            }
        }
    }

    // displaying the updated array.
    printf("\nUpdated Array :");
    for (int i=0;i<n;i++)
    { printf("%d ",a[i]);}
return 0;
}