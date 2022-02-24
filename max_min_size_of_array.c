// Find the maximum number of elements in an array
// Find the minimum number of elements in an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("CLS");
    int a[100],b[100];
    char ch='y',d;
    printf("\nEnter the elements of first array");
    int i=0; // counting the size of first array
    lbl : 
    if ((ch=='y')||(ch=='Y'))
    { printf("\nEnter the number ");
    scanf("%d",&a[i]);
    i++;
    scanf("%c",&d);
    printf("\nPress y to enter more elements and n if you don't have to enter more elements ");
    scanf("%c",&ch);
    goto lbl;
    }
    else {goto lbl1;}

    lbl1 :

     printf("\nEnter the elements of second array");
    int j=0; // conuting the length of second array.
    ch='y';
    lbl3 : 
    if ((ch=='y')||(ch=='Y'))
    { printf("\nEnter the number ");
    scanf("%d",&b[i]);
    j++;
    scanf("%c",&d);
    printf("\nPress y to enter more elements and n if you don't have to enter more elements ");
    scanf("%c",&ch);
    goto lbl3; // using goto to reach the starting position.
    }
    else {goto lbl2;}

    lbl2 :

    if(i>j) { printf("\nGreater array : first");}
    else if (i==j) { printf("\nBoth arrays are of equal size.");}
    else { printf("\nGreater array : second");}
    return 0;

}