//Create one more ID array and compare the two ID arrays for values

#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int a[20],b[20],n;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
       printf("\nEnter %d element of array :",i+1);
       scanf("%d",&a[i]); 
    }
    printf("\nEnter the elements of second array ");
    for (int i=0;i<n;i++)
    {
       printf("\nEnter %d element of array :",i+1);
       scanf("%d",&b[i]); 
    }

    //compairing values of element by element and printing whether fisrt 
    // when first has greater value at that position , second when second
    //array has greater value and equal when both have equal value.

    for (int i=0;i<n;i++)
    {
        printf("\nFor %d element : ",i+1);
        if (a[i]>b[i] ) printf("first");
        else if (a[i]==b[i]) printf("Both are equal");
        else printf("second");
    }
    return 0;
}