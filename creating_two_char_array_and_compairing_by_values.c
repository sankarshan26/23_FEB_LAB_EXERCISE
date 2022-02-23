/*Create one more ID character array and 
compare the two ID char arrays for values*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    char c,a[20],b[20];
    int n;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    scanf("%c",&c);
    for (int i=0;i<n;i++)
    {
       printf("\nEnter %d element of array :",i+1);
       scanf("%c",&a[i]); 
       scanf("%c",&c);
    }
    printf("\nEnter the elements of second array ");
    for (int i=0;i<n;i++)
    {
       printf("\nEnter %d element of array :",i+1);
       scanf("%c",&b[i]);
       scanf("%c",&c); 
    }

    //compairing values of element by element and printing whether fisrt 
    // when first has greater value at that position , second when second
    //array has greater value and equal when both have equal value.

    for (int i=0;i<n;i++)
    {
        printf("\nFor %d element : ",i+1);
        if ((int)a[i]>(int)b[i] ) {printf("first");}
        else if ((int)a[i]==(int)b[i]) {printf("Both are equal");}
        else {printf("second");}
    }
    return 0;
}