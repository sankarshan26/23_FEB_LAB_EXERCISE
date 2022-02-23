#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int a[25],n;
    printf("\nEnter an array of 5 integers ");
    for (int i=0;i<5;i++)
    {
       printf("\nEnter %d element of array :",i);
       scanf("%d",&a[i]); 
    }

    printf("\nThe number of elements you want to add :");
    scanf("%d",&n);
    int b[n],p;
    // taking array to be added as input
    for (int i=0;i<n;i++)
    {
       printf("\nEnter %d element of array :",i+1);
       scanf("%d",&b[i]); 
    }

    printf("\nEnter the position where the above given sequence is to be added :");
    scanf("%d",&p);

    int j=0;
    int k=0;
    int a1[n+5]; // Creating another array to be displayed.
    // Assigning values to the newly created array.
    for (int i=0;i<5+n;i++)
    {
       if ((i>=(p-1)) && (j!=n))
       {
          a1[i]=b[j];
          j++;
       }
       else { a1[i]=a[k];k++ ;}
      
    }

    printf("\nUpdated array :");
    for (int i=0;i<(5+n);i++)
    {
       printf("%d ",a1[i]);
    }
    return 0;
} 