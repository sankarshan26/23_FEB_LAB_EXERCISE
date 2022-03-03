// Program to print the Trianlge.
#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("\n");
    for ( int i=0;i<n;i++){
        for( int j=0 ; j<(2*n -1); j++){
            if (i==abs(n-1-j)) printf("*");
            else if (i==n-1) printf("*") ; 
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
