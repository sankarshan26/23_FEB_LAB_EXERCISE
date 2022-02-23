// sum of all elements of array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n],sum=0;
    for (int i=0;i<n;i++)
    {
       printf("\nEnter %d element of array :",i+1);
       scanf("%d",&a[i]); 
       sum=sum+a[i];
    }
    printf("\nSum of elements of array = %d",sum);
    return 0;

}