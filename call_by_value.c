#include<stdio.h>
int swap(int x,int y)
{
	int t;
	t = x;
	printf("The values of x,y and t after every step are as follows \n");
	printf("x = %d,  y= %d,  t=%d \n",x,y,t); 
	x=y;
	printf("x = %d,  y= %d,  t=%d \n",x,y,t); 
	y=t;
	printf("x = %d,  y= %d,  t=%d \n",x,y,t); 
	printf("Swapped values of a=x, b=y are as folows: %d \t %d \n",x,y); 	
	return(x,y);
}

int swap_array (int x[], int y[]); // function prototyping
int swap_three(int  a, int b, int c); 

int main()
{
	int a[3],b[3];
	printf("Enter 1-D array of length = 3 i.e, a = ");
	for (int k=0;k<3;k++) {scanf("%d",&a[k]);}
	printf ("\nEnter !-D array of length = 3 i.e, b = ");
	for (int k=0;k<3;k++) {scanf("%d",&b[k]);}
	swap_array(a,b);
	return 0;
}


/* Do the same swapping for the two array elements */
int swap_array(int a[], int b[]) 
{for (int k=0;k<3;k++)
   { a[k]=a[k]+b[k];
    b[k]=a[k] - b[k];
    a[k]=a[k] -b[k];
   }
   printf("Array a after swaping becomes : ");
   for (int i=0;i<3;i++) {printf("%d ",a[i]);}
   printf("\nArray b after swaping becomes : ");
   for (int i=0;i<3;i++) {printf("%d ",b[i]);}
   return 0;}
   
/* Do the swapping for three elements sequentially one time / two times */
int swap_three(int  a, int b, int c)
{ a=a+b;
  b=a-b;
  a=a-b;
  b=b+c;
  c=b-c;
  b=b-c;
  printf("After swaping\n");
  printf("Now values of a, b and c are  a=%d, b=%d and c=%d",a,b,c);
  return(a,b,c);
}
