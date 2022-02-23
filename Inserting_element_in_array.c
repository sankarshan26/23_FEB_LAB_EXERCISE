// Insert one element into the array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a[10],p,e; // creating an integer array.
    printf("Creating a 1-D integer array of 5 elemnts.\n\n");
    //Creating one dimensional array.
    for (int i=0;i<5;i++)
    {
        printf("Enter %d element of array :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    // taking element and postion of element where it is supposed to be inserted as input from the user.
    printf("Enter the element which is to be inserted in the array :");
    scanf("%d",&e);
    printf("\nEnter the postion where this element is supposed to be inserted :");
    scanf("%d",&p);


    //Displaying unchanged array
    printf("\nYour 1-D array is ");
    for (int i=0;i<5;i++)
    {
        printf(" ");
        printf("%d",a[i]);
    }


    // Inserting an elemnt at specified position.
    int b,c;
    b=a[p-1]; // storing the existing value at position p-1
    a[p-1]=e; // substituting the desired value at position p-1
    for (int i=p;i<6;i++) // updating the value of array
    {
        c=a[i];
        a[i]=b;
        b=c;      
    }

    // displaying array
    printf("\n\nUpdated Array ");
    for (int i=0;i<6;i++)
    {
        printf(" ");
        printf("%d",a[i]);
    }
    return 0;
}