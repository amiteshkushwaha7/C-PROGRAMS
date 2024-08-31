#include<stdio.h>
int main()
{
    int i,j,n=6;
    for(j=1; j<2*n; j++){
        printf("*");
    }
    printf("\n");
    for(i=1; i<n; i++){
        for(j=1; j<n+1-i; j++){
            printf("*");
        }
        for(j=1; j<=2*i-1; j++){
            printf(" ");
        }
        for(j=1; j<=n-i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}